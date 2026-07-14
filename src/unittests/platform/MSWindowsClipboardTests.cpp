/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
 * SPDX-FileCopyrightText: (C) 2025 Chris Rizzitello <sithlord48@gmail.com>
 * SPDX-FileCopyrightText: (C) 2012 - 2016 Synergy App Ltd
 * SPDX-FileCopyrightText: (C) 2002 Chris Schoeneman
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "MSWindowsClipboardTests.h"

#include "platform/MSWindowsClipboard.h"
#include "platform/MSWindowsClipboardBitmapConverter.h"

#include <array>
#include <cstring>

void MSWindowsClipboardTests::initTestCase()
{
  m_log.setFilter(LogLevel::Level::Verbose);

  MSWindowsClipboard clipboard(NULL);

  QVERIFY(clipboard.open(0));
  QVERIFY(clipboard.empty());
}

void MSWindowsClipboardTests::cleanupTestCase()
{
  initTestCase();
}

void MSWindowsClipboardTests::emptyUnusedClipboard()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(0));
  QVERIFY(clipboard.emptyUnowned());
}

void MSWindowsClipboardTests::emptyOpenCalled()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(0));
  QVERIFY(clipboard.empty());
}

void MSWindowsClipboardTests::emptySingleFormat()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(0));

  clipboard.add(IClipboard::Format::Text, m_testString);
  QVERIFY(clipboard.empty());
  QVERIFY(!clipboard.has(IClipboard::Format::Text));
}

void MSWindowsClipboardTests::addValue()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(0));

  clipboard.add(IClipboard::Format::Text, m_testString);
  QCOMPARE(clipboard.get(IClipboard::Format::Text), m_testString);
}

void MSWindowsClipboardTests::replaceValue()
{
  using enum IClipboard::Format;

  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(0));

  clipboard.add(Text, m_testString);
  clipboard.add(Text, m_testString2);

  QCOMPARE(clipboard.get(Text), m_testString2);
}

void MSWindowsClipboardTests::openTimeIsOne()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(1));
}

void MSWindowsClipboardTests::closeIsOpen()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(1));
  clipboard.close();
}

void MSWindowsClipboardTests::getTimeOpenWithNoEmpty()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(1));
  // this behavior is different to that of Clipboard which only
  // returns the value passed into open(t) after empty() is called.
  QCOMPARE(clipboard.getTime(), 1);
}

void MSWindowsClipboardTests::getTimeOpenAndEmpty()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(1));
  QVERIFY(clipboard.empty());
  QCOMPARE(clipboard.getTime(), 1);
}

void MSWindowsClipboardTests::has_withFormatAdded()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(0));
  QVERIFY(clipboard.empty());

  clipboard.add(IClipboard::Format::Text, m_testString);
  QVERIFY(clipboard.has(IClipboard::Format::Text));
}

void MSWindowsClipboardTests::has_withNoFormatAdded()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(0));
  QVERIFY(clipboard.empty());
  QCOMPARE(clipboard.get(IClipboard::Format::Text), "");
}

void MSWindowsClipboardTests::getNonEmptyText()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(0));
  QVERIFY(clipboard.empty());

  clipboard.add(IClipboard::Format::Text, m_testString);
  QCOMPARE(clipboard.get(IClipboard::Format::Text), m_testString);
}

void MSWindowsClipboardTests::isOwnedByDeskflow()
{
  MSWindowsClipboard clipboard(NULL);
  QVERIFY(clipboard.open(0));
  QVERIFY(clipboard.isOwnedByDeskflow());
}

void MSWindowsClipboardTests::topDownBitfieldsBitmap()
{
  constexpr LONG width = 2;
  constexpr LONG height = -2;
  constexpr std::size_t pixelSize = width * -height * 4;
  constexpr std::array<DWORD, 3> masks = {0x00ff0000, 0x0000ff00, 0x000000ff};

  BITMAPINFOHEADER header{};
  header.biSize = static_cast<DWORD>(sizeof(header));
  header.biWidth = width;
  header.biHeight = height;
  header.biPlanes = 1;
  header.biBitCount = 32;
  header.biCompression = BI_BITFIELDS;
  header.biSizeImage = static_cast<DWORD>(pixelSize);

  const auto dibSize = sizeof(header) + sizeof(masks) + pixelSize;
  HGLOBAL dib = GlobalAlloc(GMEM_MOVEABLE, dibSize);
  QVERIFY(dib != nullptr);

  void *raw = GlobalLock(dib);
  QVERIFY(raw != nullptr);
  std::memcpy(raw, &header, sizeof(header));
  std::memcpy(static_cast<char *>(raw) + sizeof(header), masks.data(), sizeof(masks));
  std::memset(static_cast<char *>(raw) + sizeof(header) + sizeof(masks), 0x7f, pixelSize);
  GlobalUnlock(dib);

  MSWindowsClipboardBitmapConverter converter;
  const auto converted = converter.toIClipboard(dib);
  GlobalFree(dib);

  QCOMPARE(converted.size(), sizeof(BITMAPINFOHEADER) + pixelSize);
  BITMAPINFOHEADER convertedHeader{};
  std::memcpy(&convertedHeader, converted.data(), sizeof(convertedHeader));
  QCOMPARE(convertedHeader.biWidth, width);
  QCOMPARE(convertedHeader.biHeight, height);
  QCOMPARE(convertedHeader.biBitCount, WORD{32});
  QCOMPARE(convertedHeader.biCompression, DWORD{BI_RGB});
}

void MSWindowsClipboardTests::topDownBitfieldsV5Bitmap()
{
  constexpr LONG width = 2;
  constexpr LONG height = -2;
  constexpr std::array<DWORD, 4> pixels = {0x00112233, 0x00445566, 0x00778899, 0x00aabbcc};

  BITMAPV5HEADER header{};
  header.bV5Size = static_cast<DWORD>(sizeof(header));
  header.bV5Width = width;
  header.bV5Height = height;
  header.bV5Planes = 1;
  header.bV5BitCount = 32;
  header.bV5Compression = BI_BITFIELDS;
  header.bV5SizeImage = static_cast<DWORD>(sizeof(pixels));
  header.bV5RedMask = 0x00ff0000;
  header.bV5GreenMask = 0x0000ff00;
  header.bV5BlueMask = 0x000000ff;
  header.bV5AlphaMask = 0xff000000;
  header.bV5CSType = LCS_sRGB;

  const auto dibSize = sizeof(header) + sizeof(pixels);
  HGLOBAL dib = GlobalAlloc(GMEM_MOVEABLE, dibSize);
  QVERIFY(dib != nullptr);

  void *raw = GlobalLock(dib);
  QVERIFY(raw != nullptr);
  std::memcpy(raw, &header, sizeof(header));
  std::memcpy(static_cast<char *>(raw) + sizeof(header), pixels.data(), sizeof(pixels));
  GlobalUnlock(dib);

  MSWindowsClipboardBitmapConverter converter;
  const auto converted = converter.toIClipboard(dib);
  GlobalFree(dib);

  QCOMPARE(converted.size(), sizeof(BITMAPINFOHEADER) + sizeof(pixels));
  BITMAPINFOHEADER convertedHeader{};
  std::memcpy(&convertedHeader, converted.data(), sizeof(convertedHeader));
  QCOMPARE(convertedHeader.biHeight, height);
  QCOMPARE(convertedHeader.biCompression, DWORD{BI_RGB});

  std::array<DWORD, 4> convertedPixels{};
  std::memcpy(convertedPixels.data(), converted.data() + sizeof(convertedHeader), sizeof(convertedPixels));
  for (std::size_t i = 0; i < pixels.size(); ++i) {
    QCOMPARE(convertedPixels[i] & 0x00ffffff, pixels[i] & 0x00ffffff);
  }
}

QTEST_MAIN(MSWindowsClipboardTests)
