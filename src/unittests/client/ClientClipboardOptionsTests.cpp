/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "client/ClientClipboardOptions.h"

#include <QTest>

#include <limits>

class ClientClipboardOptionsTests : public QObject
{
  Q_OBJECT

private Q_SLOTS:
  void usesDefaultUntilServerProvidesLimit();
  void appliesServerLimitToSendAndReceive();
  void appliesRuntimeLimitChanges();
  void zeroDisablesClipboard();
  void resetRestoresDefault();
  void missingSizeOptionKeepsDefault();
  void rejectsOddOptionList();
  void allowsExactLimitAndRejectsLargerData();
  void convertsKiBToBytesWithoutOverflow();
};

void ClientClipboardOptionsTests::usesDefaultUntilServerProvidesLimit()
{
  ClientClipboardOptions options;

  QCOMPARE(options.maximumSizeKiB(), static_cast<size_t>(3 * 1024));
  QCOMPARE(options.maximumSizeBytes(), static_cast<size_t>(3 * 1024 * 1024));
  QVERIFY(options.isEnabled());
}

void ClientClipboardOptionsTests::appliesServerLimitToSendAndReceive()
{
  ClientClipboardOptions options;

  QVERIFY(options.setOptions({kOptionClipboardSharingSize, 32 * 1024}));
  QCOMPARE(options.maximumSizeKiB(), static_cast<size_t>(32 * 1024));
  QCOMPARE(options.maximumSizeBytes(), static_cast<size_t>(32 * 1024 * 1024));
  QVERIFY(!options.exceedsMaximumSizeBytes(32 * 1024 * 1024));
}

void ClientClipboardOptionsTests::appliesRuntimeLimitChanges()
{
  ClientClipboardOptions options;

  QVERIFY(options.setOptions({kOptionClipboardSharingSize, 32 * 1024}));
  QVERIFY(options.setOptions({kOptionClipboardSharingSize, 4 * 1024}));
  QCOMPARE(options.maximumSizeBytes(), static_cast<size_t>(4 * 1024 * 1024));
}

void ClientClipboardOptionsTests::zeroDisablesClipboard()
{
  ClientClipboardOptions options;

  QVERIFY(options.setOptions({kOptionClipboardSharingSize, 0}));
  QVERIFY(!options.isEnabled());
  QCOMPARE(options.maximumSizeBytes(), static_cast<size_t>(0));

  QVERIFY(options.setOptions({kOptionClipboardSharingSize, 1024}));
  QVERIFY(options.isEnabled());
}

void ClientClipboardOptionsTests::resetRestoresDefault()
{
  ClientClipboardOptions options;
  QVERIFY(options.setOptions({kOptionClipboardSharing, 0, kOptionClipboardSharingSize, 32 * 1024}));

  options.reset();

  QVERIFY(options.isEnabled());
  QCOMPARE(options.maximumSizeBytes(), static_cast<size_t>(3 * 1024 * 1024));
}

void ClientClipboardOptionsTests::missingSizeOptionKeepsDefault()
{
  ClientClipboardOptions options;

  QVERIFY(options.setOptions({kOptionRelativeMouseMoves, 1}));
  QCOMPARE(options.maximumSizeBytes(), static_cast<size_t>(3 * 1024 * 1024));
}

void ClientClipboardOptionsTests::rejectsOddOptionList()
{
  ClientClipboardOptions options;
  QVERIFY(options.setOptions({kOptionClipboardSharingSize, 32 * 1024}));

  QVERIFY(!options.setOptions({kOptionClipboardSharingSize}));
  QCOMPARE(options.maximumSizeBytes(), static_cast<size_t>(32 * 1024 * 1024));
}

void ClientClipboardOptionsTests::allowsExactLimitAndRejectsLargerData()
{
  ClientClipboardOptions options;
  QVERIFY(options.setOptions({kOptionClipboardSharingSize, 1}));

  QVERIFY(!options.exceedsMaximumSizeBytes(1024));
  QVERIFY(options.exceedsMaximumSizeBytes(1025));
}

void ClientClipboardOptionsTests::convertsKiBToBytesWithoutOverflow()
{
  ClientClipboardOptions options;
  QVERIFY(options.setOptions({kOptionClipboardSharingSize, std::numeric_limits<uint32_t>::max()}));

  const auto maximumKiB = std::numeric_limits<size_t>::max() / 1024;
  const auto expected = options.maximumSizeKiB() > maximumKiB ? std::numeric_limits<size_t>::max()
                                                              : options.maximumSizeKiB() * 1024;
  QCOMPARE(options.maximumSizeBytes(), expected);
}

QTEST_MAIN(ClientClipboardOptionsTests)

#include "ClientClipboardOptionsTests.moc"
