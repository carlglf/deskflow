/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2025 Chris Rizzitello <sithlord48@gmail.com>
 * SPDX-FileCopyrightText: (C) 2012 - 2016 Synergy App Ltd
 * SPDX-FileCopyrightText: (C) 2011 Nick Bolton
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "OSXClipboardTests.h"

#include "deskflow/Clipboard.h"
#include "platform/OSXClipboard.h"
#include "platform/OSXClipboardImageConverter.h"
#include "platform/OSXClipboardUTF8Converter.h"

#include <QBuffer>
#include <QImage>
#include <QtEndian>

void OSXClipboardTests::open()
{
  OSXClipboard clipboard;
  QVERIFY(clipboard.open(0));
  QVERIFY(clipboard.empty());
  clipboard.close();
}

void OSXClipboardTests::singleFormat()
{
  using enum IClipboard::Format;

  OSXClipboard clipboard;
  QVERIFY(clipboard.empty());
  clipboard.add(Text, m_testString);
  QVERIFY(clipboard.has(Text));
  QCOMPARE(clipboard.get(Text), m_testString);
}

void OSXClipboardTests::emptyCopyPreservesPasteboard()
{
  using enum IClipboard::Format;

  OSXClipboard destination;
  QVERIFY(destination.open(0));
  QVERIFY(destination.empty());
  destination.add(Text, m_testString);
  destination.close();

  Clipboard source;
  QVERIFY(!IClipboard::copy(&destination, &source));

  QVERIFY(destination.open(0));
  QVERIFY(destination.has(Text));
  QCOMPARE(destination.get(Text), m_testString);
  destination.close();
}

void OSXClipboardTests::containsMatchingTextSubset()
{
  using enum IClipboard::Format;

  OSXClipboard clipboard;
  QVERIFY(clipboard.open(0));
  QVERIFY(clipboard.empty());
  clipboard.add(Text, m_testString);
  clipboard.add(HTML, "<b>" + m_testString + "</b>");
  clipboard.close();

  Clipboard candidate;
  QVERIFY(candidate.open(0));
  candidate.add(Text, m_testString);
  candidate.close();

  QVERIFY(IClipboard::containsData(&clipboard, &candidate));
}

void OSXClipboardTests::formatConvert_UTF8()
{
  OSXClipboardUTF8Converter converter;
  QCOMPARE(IClipboard::Format::Text, converter.getFormat());
  QCOMPARE(converter.getOSXFormat(), CFSTR("public.utf8-plain-text"));
  QCOMPARE(converter.fromIClipboard("test data\n"), "test data\r");
  QCOMPARE(converter.toIClipboard("test data\r"), "test data\n");
}

void OSXClipboardTests::formatConvert_PNG()
{
  OSXClipboardImageConverter converter(CFSTR("public.png"), "PNG");
  QCOMPARE(converter.getFormat(), IClipboard::Format::Bitmap);
  QCOMPARE(converter.getOSXFormat(), CFSTR("public.png"));

  QImage source(2, 1, QImage::Format_RGBA8888);
  source.setPixelColor(0, 0, QColor(255, 0, 0, 255));
  source.setPixelColor(1, 0, QColor(0, 255, 0, 255));
  QByteArray png;
  QBuffer buffer(&png);
  QVERIFY(buffer.open(QIODevice::WriteOnly));
  QVERIFY(source.save(&buffer, "PNG"));

  const auto dib = converter.toIClipboard({png.constData(), static_cast<size_t>(png.size())});
  QVERIFY(!dib.empty());
  const auto roundTripPng = converter.fromIClipboard(dib);
  QVERIFY(!roundTripPng.empty());

  QImage roundTrip;
  QVERIFY(roundTrip.loadFromData(QByteArray::fromRawData(roundTripPng.data(), roundTripPng.size()), "PNG"));
  QCOMPARE(roundTrip.size(), source.size());
  QCOMPARE(roundTrip.pixelColor(0, 0), source.pixelColor(0, 0));
  QCOMPARE(roundTrip.pixelColor(1, 0), source.pixelColor(1, 0));
}

void OSXClipboardTests::nativePNG()
{
  QImage source(2, 1, QImage::Format_RGBA8888);
  source.fill(QColor(255, 0, 0, 255));
  QByteArray png;
  QBuffer buffer(&png);
  QVERIFY(buffer.open(QIODevice::WriteOnly));
  QVERIFY(source.save(&buffer, "PNG"));

  PasteboardRef pasteboard = nullptr;
  QCOMPARE(PasteboardCreate(kPasteboardClipboard, &pasteboard), noErr);
  QVERIFY(pasteboard != nullptr);
  QCOMPARE(PasteboardClear(pasteboard), noErr);

  CFDataRef pngData = CFDataCreate(kCFAllocatorDefault, reinterpret_cast<const UInt8 *>(png.constData()), png.size());
  QVERIFY(pngData != nullptr);
  PasteboardItemID itemID = &pasteboard;
  QCOMPARE(PasteboardPutItemFlavor(pasteboard, itemID, CFSTR("public.png"), pngData, kPasteboardFlavorNoFlags), noErr);
  CFRelease(pngData);
  CFRelease(pasteboard);

  OSXClipboard clipboard;
  QVERIFY(clipboard.open(0));
  QVERIFY(clipboard.has(IClipboard::Format::Bitmap));
  const auto dib = clipboard.get(IClipboard::Format::Bitmap);
  QVERIFY(!dib.empty());
  QCOMPARE(qFromLittleEndian<quint32>(dib.data()), quint32(40));
  clipboard.close();
}

void OSXClipboardTests::formatConvert_TIFF()
{
  OSXClipboardImageConverter converter(CFSTR("public.tiff"), "TIFF");
  QImage source(1, 1, QImage::Format_RGBA8888);
  source.fill(QColor(0, 0, 255, 255));

  QByteArray tiff;
  QBuffer buffer(&tiff);
  QVERIFY(buffer.open(QIODevice::WriteOnly));
  QVERIFY(source.save(&buffer, "TIFF"));

  const auto dib = converter.toIClipboard({tiff.constData(), static_cast<size_t>(tiff.size())});
  QVERIFY(!dib.empty());
  const auto roundTripTiff = converter.fromIClipboard(dib);
  QVERIFY(!roundTripTiff.empty());

  QImage roundTrip;
  QVERIFY(roundTrip.loadFromData(QByteArray::fromRawData(roundTripTiff.data(), roundTripTiff.size()), "TIFF"));
  QCOMPARE(roundTrip.size(), source.size());
  QCOMPARE(roundTrip.pixelColor(0, 0), source.pixelColor(0, 0));
}

QTEST_MAIN(OSXClipboardTests)
