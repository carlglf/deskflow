/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#pragma once

#include "deskflow/KeyTypes.h"

#include <array>
#include <cstddef>
#include <map>
#include <optional>

namespace deskflow {

//! Translates modifier keys while retaining their physical side.
class ModifierKeyMapper
{
public:
  static constexpr std::size_t kExactModifierKeyCount = 11;

  ModifierKeyMapper();

  void reset();
  void clearPressedKeys();

  bool setModifierMapping(KeyModifierID source, KeyModifierID target);
  bool setKeyMapping(KeyID source, KeyID target);

  KeyID translateKey(KeyID source) const;
  KeyModifierMask translateModifiers(KeyModifierMask sourceMask) const;

  void keyDown(KeyID source, KeyButton button);
  void keyUp(KeyButton button);

  static bool isModifierKey(KeyID key);
  static KeyModifierMask modifierMaskForKey(KeyID key);

private:
  struct PressedModifier
  {
    KeyID m_source = kKeyNone;
    KeyModifierMask m_sourceMask = 0;
    KeyModifierMask m_targetMask = 0;
    bool m_hasExactMapping = false;
  };

  static std::optional<std::size_t> keyIndex(KeyID key);
  static KeyModifierID modifierIDForKey(KeyID key);
  static KeyID keyForModifier(KeyModifierID modifier, bool right);
  static KeyModifierMask maskForModifier(KeyModifierID modifier);
  static bool isRightKey(KeyID key);

  KeyID translateLegacyKey(KeyID source) const;
  KeyModifierMask translateLegacyMask(KeyModifierMask sourceMask) const;

  std::array<KeyModifierID, kKeyModifierIDLast> m_modifierMappings;
  std::array<std::optional<KeyID>, kExactModifierKeyCount> m_keyMappings;
  std::map<KeyButton, PressedModifier> m_pressedModifiers;
};

} // namespace deskflow
