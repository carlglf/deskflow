/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2012 Synergy App Ltd
 * SPDX-FileCopyrightText: (C) 2008 Volker Lanz <vl@fidra.de>
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "ScreenConfig.h"

const char *ScreenConfig::m_ModifierNames[] = {"shift", "ctrl", "alt", "meta", "super", "altgr", "none"};

const char *ScreenConfig::m_ModifierKeyNames[] = {
    "shift_l", "shift_r", "ctrl_l",  "ctrl_r",  "alt_l", "alt_r",
    "meta_l",  "meta_r",  "super_l", "super_r", "altgr", "none",
};

const char *ScreenConfig::m_ModifierKeyOptionNames[] = {
    "shift_l", "shift_r", "ctrl_l", "ctrl_r", "alt_l", "alt_r", "meta_l", "meta_r", "super_l", "super_r", "altgr_key",
};

const char *ScreenConfig::m_FixNames[] = {
    "halfDuplexCapsLock", "halfDuplexNumLock", "halfDuplexScrollLock", "xtestIsXineramaUnaware"
};

const char *ScreenConfig::m_SwitchCornerNames[] = {"top-left", "top-right", "bottom-left", "bottom-right"};
