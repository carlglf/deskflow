/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "deskflow/ModifierKeyMapper.h"

#include <QTest>

class ModifierKeyMapperTests : public QObject
{
  Q_OBJECT

private Q_SLOTS:
  void legacyMappingPreservesSide();
  void exactMappingOverridesOneSide();
  void pressedSidesProduceIndependentMask();
  void mappingToNoneDoesNotFallBack();
  void untrackedModifierUsesLegacyFallback();
  void exactAltGrCanRepresentRightAlt();
};

void ModifierKeyMapperTests::legacyMappingPreservesSide()
{
  deskflow::ModifierKeyMapper mapper;
  QVERIFY(mapper.setModifierMapping(kKeyModifierIDControl, kKeyModifierIDSuper));

  QCOMPARE(mapper.translateKey(kKeyControl_L), kKeySuper_L);
  QCOMPARE(mapper.translateKey(kKeyControl_R), kKeySuper_R);
  QCOMPARE(mapper.translateModifiers(KeyModifierControl), KeyModifierSuper);
}

void ModifierKeyMapperTests::exactMappingOverridesOneSide()
{
  deskflow::ModifierKeyMapper mapper;
  QVERIFY(mapper.setModifierMapping(kKeyModifierIDControl, kKeyModifierIDSuper));
  QVERIFY(mapper.setKeyMapping(kKeyControl_R, kKeyAlt_L));

  QCOMPARE(mapper.translateKey(kKeyControl_L), kKeySuper_L);
  QCOMPARE(mapper.translateKey(kKeyControl_R), kKeyAlt_L);
}

void ModifierKeyMapperTests::pressedSidesProduceIndependentMask()
{
  deskflow::ModifierKeyMapper mapper;
  QVERIFY(mapper.setKeyMapping(kKeyControl_L, kKeySuper_L));
  QVERIFY(mapper.setKeyMapping(kKeyControl_R, kKeyAlt_R));

  mapper.keyDown(kKeyControl_L, 1);
  QCOMPARE(mapper.translateModifiers(KeyModifierControl), KeyModifierSuper);

  mapper.keyDown(kKeyControl_R, 2);
  QCOMPARE(mapper.translateModifiers(KeyModifierControl), KeyModifierSuper | KeyModifierAlt);

  mapper.keyUp(1);
  QCOMPARE(mapper.translateModifiers(KeyModifierControl), KeyModifierAlt);
}

void ModifierKeyMapperTests::mappingToNoneDoesNotFallBack()
{
  deskflow::ModifierKeyMapper mapper;
  QVERIFY(mapper.setModifierMapping(kKeyModifierIDControl, kKeyModifierIDSuper));
  QVERIFY(mapper.setKeyMapping(kKeyControl_R, kKeyNone));

  mapper.keyDown(kKeyControl_R, 2);
  QCOMPARE(mapper.translateKey(kKeyControl_R), kKeyNone);
  QCOMPARE(mapper.translateModifiers(KeyModifierControl), KeyModifierMask{0});
}

void ModifierKeyMapperTests::untrackedModifierUsesLegacyFallback()
{
  deskflow::ModifierKeyMapper mapper;
  QVERIFY(mapper.setModifierMapping(kKeyModifierIDControl, kKeyModifierIDSuper));
  QVERIFY(mapper.setKeyMapping(kKeyControl_R, kKeyAlt_R));

  QCOMPARE(mapper.translateModifiers(KeyModifierControl), KeyModifierSuper);
}

void ModifierKeyMapperTests::exactAltGrCanRepresentRightAlt()
{
  deskflow::ModifierKeyMapper mapper;
  QVERIFY(mapper.setKeyMapping(kKeyAltGr, kKeySuper_R));

  mapper.keyDown(kKeyAltGr, 3);
  QCOMPARE(mapper.translateKey(kKeyAltGr), kKeySuper_R);
  QCOMPARE(mapper.translateModifiers(KeyModifierAlt), KeyModifierSuper);
}

QTEST_MAIN(ModifierKeyMapperTests)

#include "ModifierKeyMapperTests.moc"
