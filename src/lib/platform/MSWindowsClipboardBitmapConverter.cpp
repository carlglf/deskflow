/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
 * SPDX-FileCopyrightText: (C) 2012 - 2016 Synergy App Ltd
 * SPDX-FileCopyrightText: (C) 2004 Chris Schoeneman
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "platform/MSWindowsClipboardBitmapConverter.h"

#include "base/FinalAction.h"
#include "base/Log.h"

#include <cstdint>
#include <limits>
#include <optional>

namespace {

std::optional<std::size_t> bitmapDataSize(LONG width, LONG height, WORD bitCount)
{
  if (width <= 0 || height == 0 || bitCount == 0) {
    return std::nullopt;
  }

  const auto unsignedWidth = static_cast<std::uint64_t>(width);
  const auto unsignedHeight = height < 0 ? static_cast<std::uint64_t>(-static_cast<std::int64_t>(height))
                                         : static_cast<std::uint64_t>(height);
  const auto rowBits = unsignedWidth * bitCount;
  const auto rowBytes = ((rowBits + 31) / 32) * 4;

  if (rowBytes > (std::numeric_limits<std::size_t>::max)() / unsignedHeight) {
    return std::nullopt;
  }

  return static_cast<std::size_t>(rowBytes * unsignedHeight);
}

} // namespace

//
// MSWindowsClipboardBitmapConverter
//

IClipboard::Format MSWindowsClipboardBitmapConverter::getFormat() const
{
  return IClipboard::Format::Bitmap;
}

UINT MSWindowsClipboardBitmapConverter::getWin32Format() const
{
  return CF_DIB;
}

HANDLE
MSWindowsClipboardBitmapConverter::fromIClipboard(const std::string &data) const
{
  // copy to memory handle
  HGLOBAL gData = GlobalAlloc(GMEM_MOVEABLE | GMEM_DDESHARE, data.size());
  if (gData != nullptr) {
    // get a pointer to the allocated memory
    char *dst = (char *)GlobalLock(gData);
    if (dst != nullptr) {
      memcpy(dst, data.data(), data.size());
      GlobalUnlock(gData);
    } else {
      GlobalFree(gData);
      gData = nullptr;
    }
  }

  return gData;
}

std::string MSWindowsClipboardBitmapConverter::toIClipboard(HANDLE data) const
{
  // get datator
  LPVOID src = GlobalLock(data);
  if (src == nullptr) {
    return std::string();
  }
  const auto unlock = deskflow::finally([data]() { GlobalUnlock(data); });
  const auto srcSize = GlobalSize(data);
  if (srcSize < sizeof(BITMAPINFOHEADER)) {
    LOG_WARN("clipboard bitmap is smaller than its header");
    return {};
  }

  // check image type
  const BITMAPINFO *bitmap = static_cast<const BITMAPINFO *>(src);
  if (bitmap->bmiHeader.biSize < sizeof(BITMAPINFOHEADER) || bitmap->bmiHeader.biSize > srcSize ||
      !bitmapDataSize(bitmap->bmiHeader.biWidth, bitmap->bmiHeader.biHeight, bitmap->bmiHeader.biBitCount)) {
    LOG_WARN("clipboard bitmap has an invalid header");
    return {};
  }

  LOG(
      (CLOG_INFO "bitmap: %dx%d %d", bitmap->bmiHeader.biWidth, bitmap->bmiHeader.biHeight,
       (int)bitmap->bmiHeader.biBitCount)
  );
  if (bitmap->bmiHeader.biPlanes == 1 && (bitmap->bmiHeader.biBitCount == 24 || bitmap->bmiHeader.biBitCount == 32) &&
      bitmap->bmiHeader.biCompression == BI_RGB) {
    // already in canonical form
    return std::string(static_cast<char const *>(src), srcSize);
  }

  // create a destination DIB section
  LOG_INFO("convert image from: depth=%d comp=%d", bitmap->bmiHeader.biBitCount, bitmap->bmiHeader.biCompression);
  void *raw = nullptr;
  BITMAPINFOHEADER info{};
  const LONG w = bitmap->bmiHeader.biWidth;
  const LONG h = bitmap->bmiHeader.biHeight;
  const auto height = static_cast<DWORD>(h < 0 ? -static_cast<std::int64_t>(h) : h);
  const auto imageSize = bitmapDataSize(w, h, 32);
  if (!imageSize || *imageSize > std::string{}.max_size() - sizeof(info)) {
    LOG_WARN("clipboard bitmap dimensions are too large");
    return {};
  }

  info.biSize = sizeof(BITMAPINFOHEADER);
  info.biWidth = w;
  info.biHeight = h;
  info.biPlanes = 1;
  info.biBitCount = 32;
  info.biCompression = BI_RGB;
  info.biSizeImage = 0;
  info.biXPelsPerMeter = 1000;
  info.biYPelsPerMeter = 1000;
  info.biClrUsed = 0;
  info.biClrImportant = 0;
  HDC dc = GetDC(nullptr);
  if (dc == nullptr) {
    LOG_WARN("failed to get a device context for clipboard bitmap conversion");
    return {};
  }
  const auto releaseDC = deskflow::finally([dc]() { ReleaseDC(nullptr, dc); });

  HBITMAP dst = CreateDIBSection(dc, (BITMAPINFO *)&info, DIB_RGB_COLORS, &raw, nullptr, 0);
  if (dst == nullptr || raw == nullptr) {
    if (dst != nullptr) {
      DeleteObject(dst);
    }
    LOG_WARN("failed to create a DIB section for clipboard bitmap conversion");
    return {};
  }
  const auto deleteBitmap = deskflow::finally([dst]() { DeleteObject(dst); });

  // find the start of the pixel data
  std::size_t srcBitsOffset = bitmap->bmiHeader.biSize;
  const auto addToPixelOffset = [&srcBitsOffset, srcSize](std::uint64_t size) {
    if (size > srcSize - srcBitsOffset) {
      return false;
    }
    srcBitsOffset += static_cast<std::size_t>(size);
    return true;
  };

  bool validPixelOffset = true;
  if (bitmap->bmiHeader.biBitCount >= 16) {
    if (bitmap->bmiHeader.biCompression == BI_BITFIELDS &&
        (bitmap->bmiHeader.biBitCount == 16 || bitmap->bmiHeader.biBitCount == 32) &&
        bitmap->bmiHeader.biSize == sizeof(BITMAPINFOHEADER)) {
      validPixelOffset = addToPixelOffset(3 * sizeof(DWORD));
    }
  } else if (bitmap->bmiHeader.biClrUsed != 0) {
    validPixelOffset = addToPixelOffset(static_cast<std::uint64_t>(bitmap->bmiHeader.biClrUsed) * sizeof(RGBQUAD));
  } else {
    // http://msdn.microsoft.com/en-us/library/ke55d167(VS.80).aspx
    validPixelOffset = addToPixelOffset((std::uint64_t{1} << bitmap->bmiHeader.biBitCount) * sizeof(RGBQUAD));
  }

  if (!validPixelOffset) {
    LOG_WARN("clipboard bitmap pixel offset is outside its data");
    return {};
  }

  const auto sourceImageSize = bitmapDataSize(w, h, bitmap->bmiHeader.biBitCount);
  if ((bitmap->bmiHeader.biCompression == BI_RGB || bitmap->bmiHeader.biCompression == BI_BITFIELDS) &&
      (!sourceImageSize || *sourceImageSize > srcSize - srcBitsOffset)) {
    LOG_WARN("clipboard bitmap pixel data is truncated");
    return {};
  }
  const char *srcBits = static_cast<const char *>(src) + srcBitsOffset;

  // copy source image to destination image
  HDC dstDC = CreateCompatibleDC(dc);
  if (dstDC == nullptr) {
    LOG_WARN("failed to create a device context for clipboard bitmap conversion");
    return {};
  }
  const auto deleteDstDC = deskflow::finally([dstDC]() { DeleteDC(dstDC); });

  HGDIOBJ oldBitmap = SelectObject(dstDC, dst);
  if (oldBitmap == nullptr || oldBitmap == HGDI_ERROR) {
    LOG_WARN("failed to select the destination clipboard bitmap");
    return {};
  }
  const auto restoreBitmap = deskflow::finally([dstDC, oldBitmap]() { SelectObject(dstDC, oldBitmap); });

  if (SetDIBitsToDevice(dstDC, 0, 0, static_cast<DWORD>(w), height, 0, 0, 0, height, srcBits, bitmap, DIB_RGB_COLORS) ==
      0) {
    LOG_WARN("failed to convert clipboard bitmap pixels");
    return {};
  }
  GdiFlush();

  // extract data
  std::string image((const char *)&info, info.biSize);
  image.append((const char *)raw, *imageSize);

  return image;
}
