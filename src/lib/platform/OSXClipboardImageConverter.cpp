/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "platform/OSXClipboardImageConverter.h"

#include "base/Log.h"
#include "platform/OSXClipboardBMPConverter.h"

#include <QBuffer>
#include <QImage>

namespace {

QImage decodeImage(const std::string &data, const char *format)
{
  QImage image;
  const auto bytes = QByteArray::fromRawData(data.data(), static_cast<qsizetype>(data.size()));
  if (!image.loadFromData(bytes, format)) {
    LOG_WARN("failed to decode macOS clipboard image as %s", format);
    return {};
  }
  return image;
}

std::string encodeImage(const QImage &image, const char *format)
{
  QByteArray bytes;
  QBuffer buffer(&bytes);
  if (!buffer.open(QIODevice::WriteOnly) || !image.save(&buffer, format)) {
    LOG_WARN("failed to encode clipboard image as %s", format);
    return {};
  }
  return {bytes.constData(), static_cast<size_t>(bytes.size())};
}

} // namespace

OSXClipboardImageConverter::OSXClipboardImageConverter(CFStringRef osxFormat, const char *imageFormat)
    : m_osxFormat(osxFormat),
      m_imageFormat(imageFormat)
{
}

CFStringRef OSXClipboardImageConverter::getOSXFormat() const
{
  return m_osxFormat;
}

std::string OSXClipboardImageConverter::doFromIClipboard(const std::string &data) const
{
  OSXClipboardBMPConverter bmpConverter;
  const auto bmp = bmpConverter.fromIClipboard(data);
  if (bmp.empty()) {
    return {};
  }

  const auto image = decodeImage(bmp, "BMP");
  if (image.isNull()) {
    return {};
  }
  return encodeImage(image, m_imageFormat);
}

std::string OSXClipboardImageConverter::doToIClipboard(const std::string &data) const
{
  const auto image = decodeImage(data, m_imageFormat);
  if (image.isNull()) {
    return {};
  }

  const auto bmp = encodeImage(image, "BMP");
  if (bmp.size() <= 14) {
    return {};
  }

  return bmp.substr(14);
}
