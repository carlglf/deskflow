/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "deskflow/ModifierKeyMapper.h"

namespace deskflow {

namespace {

constexpr std::array<KeyID, ModifierKeyMapper::kExactModifierKeyCount> s_modifierKeys = {
    kKeyShift_L, kKeyShift_R, kKeyControl_L, kKeyControl_R, kKeyAlt_L, kKeyAlt_R,
    kKeyMeta_L,  kKeyMeta_R,  kKeySuper_L,   kKeySuper_R,   kKeyAltGr,
};

constexpr KeyModifierMask s_translatableModifiers =
    KeyModifierShift | KeyModifierControl | KeyModifierAlt | KeyModifierMeta | KeyModifierSuper | KeyModifierAltGr;

} // namespace

ModifierKeyMapper::ModifierKeyMapper()
{
  reset();
}

void ModifierKeyMapper::reset()
{
  for (KeyModifierID modifier = 0; modifier < kKeyModifierIDLast; ++modifier) {
    m_modifierMappings[modifier] = modifier;
  }
  m_keyMappings.fill(std::nullopt);
  clearPressedKeys();
}

void ModifierKeyMapper::clearPressedKeys()
{
  m_pressedModifiers.clear();
}

bool ModifierKeyMapper::setModifierMapping(KeyModifierID source, KeyModifierID target)
{
  if (source == kKeyModifierIDNull || source >= kKeyModifierIDLast || target >= kKeyModifierIDLast) {
    return false;
  }

  m_modifierMappings[source] = target;
  return true;
}

bool ModifierKeyMapper::setKeyMapping(KeyID source, KeyID target)
{
  const auto index = keyIndex(source);
  if (!index.has_value() || (target != kKeyNone && !isModifierKey(target))) {
    return false;
  }

  m_keyMappings[*index] = target;
  return true;
}

KeyID ModifierKeyMapper::translateKey(KeyID source) const
{
  const auto index = keyIndex(source);
  if (index.has_value() && m_keyMappings[*index].has_value()) {
    return *m_keyMappings[*index];
  }

  return translateLegacyKey(source);
}

KeyModifierMask ModifierKeyMapper::translateModifiers(KeyModifierMask sourceMask) const
{
  KeyModifierMask targetMask = sourceMask & ~s_translatableModifiers;

  constexpr std::array<KeyModifierMask, 6> sourceModifiers = {
      KeyModifierShift, KeyModifierControl, KeyModifierAlt, KeyModifierMeta, KeyModifierSuper, KeyModifierAltGr,
  };

  for (const auto sourceModifier : sourceModifiers) {
    if ((sourceMask & sourceModifier) == 0) {
      continue;
    }

    bool foundPressedKey = false;
    for (const auto &[button, pressed] : m_pressedModifiers) {
      (void)button;
      const bool exactAltGrAsAlt =
          sourceModifier == KeyModifierAlt && pressed.m_source == kKeyAltGr && pressed.m_hasExactMapping;
      if (pressed.m_sourceMask == sourceModifier || exactAltGrAsAlt) {
        foundPressedKey = true;
        targetMask |= pressed.m_targetMask;
      }
    }

    if (!foundPressedKey) {
      targetMask |= translateLegacyMask(sourceModifier);
    }
  }

  return targetMask;
}

void ModifierKeyMapper::keyDown(KeyID source, KeyButton button)
{
  const auto sourceMask = modifierMaskForKey(source);
  if (button == 0 || sourceMask == 0) {
    return;
  }

  const auto index = keyIndex(source);
  const bool hasExactMapping = index.has_value() && m_keyMappings[*index].has_value();
  m_pressedModifiers[button] = {
      source,
      sourceMask,
      modifierMaskForKey(translateKey(source)),
      hasExactMapping,
  };
}

void ModifierKeyMapper::keyUp(KeyButton button)
{
  m_pressedModifiers.erase(button);
}

bool ModifierKeyMapper::isModifierKey(KeyID key)
{
  return keyIndex(key).has_value();
}

KeyModifierMask ModifierKeyMapper::modifierMaskForKey(KeyID key)
{
  return maskForModifier(modifierIDForKey(key));
}

std::optional<std::size_t> ModifierKeyMapper::keyIndex(KeyID key)
{
  for (std::size_t index = 0; index < s_modifierKeys.size(); ++index) {
    if (s_modifierKeys[index] == key) {
      return index;
    }
  }
  return std::nullopt;
}

KeyModifierID ModifierKeyMapper::modifierIDForKey(KeyID key)
{
  switch (key) {
  case kKeyShift_L:
  case kKeyShift_R:
    return kKeyModifierIDShift;

  case kKeyControl_L:
  case kKeyControl_R:
    return kKeyModifierIDControl;

  case kKeyAlt_L:
  case kKeyAlt_R:
    return kKeyModifierIDAlt;

  case kKeyMeta_L:
  case kKeyMeta_R:
    return kKeyModifierIDMeta;

  case kKeySuper_L:
  case kKeySuper_R:
    return kKeyModifierIDSuper;

  case kKeyAltGr:
    return kKeyModifierIDAltGr;

  default:
    return kKeyModifierIDNull;
  }
}

KeyID ModifierKeyMapper::keyForModifier(KeyModifierID modifier, bool right)
{
  switch (modifier) {
  case kKeyModifierIDShift:
    return right ? kKeyShift_R : kKeyShift_L;
  case kKeyModifierIDControl:
    return right ? kKeyControl_R : kKeyControl_L;
  case kKeyModifierIDAlt:
    return right ? kKeyAlt_R : kKeyAlt_L;
  case kKeyModifierIDMeta:
    return right ? kKeyMeta_R : kKeyMeta_L;
  case kKeyModifierIDSuper:
    return right ? kKeySuper_R : kKeySuper_L;
  case kKeyModifierIDAltGr:
    return kKeyAltGr;
  default:
    return kKeyNone;
  }
}

KeyModifierMask ModifierKeyMapper::maskForModifier(KeyModifierID modifier)
{
  switch (modifier) {
  case kKeyModifierIDShift:
    return KeyModifierShift;
  case kKeyModifierIDControl:
    return KeyModifierControl;
  case kKeyModifierIDAlt:
    return KeyModifierAlt;
  case kKeyModifierIDMeta:
    return KeyModifierMeta;
  case kKeyModifierIDSuper:
    return KeyModifierSuper;
  case kKeyModifierIDAltGr:
    return KeyModifierAltGr;
  default:
    return 0;
  }
}

bool ModifierKeyMapper::isRightKey(KeyID key)
{
  switch (key) {
  case kKeyShift_R:
  case kKeyControl_R:
  case kKeyAlt_R:
  case kKeyMeta_R:
  case kKeySuper_R:
  case kKeyAltGr:
    return true;
  default:
    return false;
  }
}

KeyID ModifierKeyMapper::translateLegacyKey(KeyID source) const
{
  const auto modifier = modifierIDForKey(source);
  if (modifier == kKeyModifierIDNull) {
    return source;
  }

  return keyForModifier(m_modifierMappings[modifier], isRightKey(source));
}

KeyModifierMask ModifierKeyMapper::translateLegacyMask(KeyModifierMask sourceMask) const
{
  KeyModifierMask targetMask = 0;
  constexpr std::array<KeyModifierID, 6> modifiers = {
      kKeyModifierIDShift, kKeyModifierIDControl, kKeyModifierIDAlt,
      kKeyModifierIDMeta,  kKeyModifierIDSuper,   kKeyModifierIDAltGr,
  };

  for (const auto modifier : modifiers) {
    if ((sourceMask & maskForModifier(modifier)) != 0) {
      targetMask |= maskForModifier(m_modifierMappings[modifier]);
    }
  }

  return targetMask;
}

} // namespace deskflow
