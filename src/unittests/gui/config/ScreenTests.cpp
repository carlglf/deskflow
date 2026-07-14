/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2025 Chris Rizzitello <sithlord48@gmail.com>
 * SPDX-FileCopyrightText: (C) 2024 Synergy App Ltd
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "ScreenTests.h"

#include "common/Settings.h"
#include "gui/config/Screen.h"

namespace {

class TestScreen : public Screen
{
public:
  using Screen::Screen;
  using Screen::setModifierKey;
};

} // namespace

void ScreenTests::initTestCase()
{
  QDir dir;
  QVERIFY(dir.mkpath(m_settingsPath));

  QFile oldSettings(m_settingsFile);
  if (oldSettings.exists())
    oldSettings.remove();

  Settings::setSettingsFile(m_settingsFile);
  Settings::setStateFile(m_stateFile);
}

void ScreenTests::basicFunctionality()
{
  Screen screen;
  QVERIFY(screen.isNull());

  screen.setName("stub");
  QVERIFY(!screen.isNull());

  screen.saveSettings(Settings::proxy());
  screen.loadSettings(Settings::proxy());
  QCOMPARE("stub", screen.name());
}

void ScreenTests::exactModifierSettings()
{
  using enum ScreenConfig::ModifierKey;

  TestScreen screen("modifier-test");
  screen.setModifierKey(CtrlR, static_cast<int>(AltL));
  screen.setModifierKey(SuperL, static_cast<int>(SuperR));
  screen.saveSettings(Settings::proxy());

  Screen loaded;
  loaded.loadSettings(Settings::proxy());
  QCOMPARE(loaded.modifierKey(static_cast<int>(CtrlR)), static_cast<int>(AltL));
  QCOMPARE(loaded.modifierKey(static_cast<int>(SuperL)), static_cast<int>(SuperR));
  QVERIFY(loaded.screensSection().contains("ctrl_r = alt_l"));
  QVERIFY(loaded.screensSection().contains("super_l = super_r"));
}

QTEST_MAIN(ScreenTests)
