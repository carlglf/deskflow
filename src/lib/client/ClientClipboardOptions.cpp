/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "client/ClientClipboardOptions.h"

#include <limits>

void ClientClipboardOptions::reset()
{
  m_sharingEnabled = true;
  m_maximumSizeKiB = kDefaultMaximumSizeKiB;
}

bool ClientClipboardOptions::setOptions(const OptionsList &options)
{
  if (options.size() % 2 != 0) {
    return false;
  }

  for (size_t i = 0; i < options.size(); i += 2) {
    if (options[i] == kOptionClipboardSharing) {
      m_sharingEnabled = options[i + 1] != 0;
    } else if (options[i] == kOptionClipboardSharingSize) {
      m_maximumSizeKiB = options[i + 1];
    }
  }

  return true;
}

bool ClientClipboardOptions::isEnabled() const
{
  return m_sharingEnabled && m_maximumSizeKiB != 0;
}

size_t ClientClipboardOptions::maximumSizeKiB() const
{
  return m_maximumSizeKiB;
}

size_t ClientClipboardOptions::maximumSizeBytes() const
{
  constexpr size_t bytesPerKiB = 1024;
  constexpr size_t maximumKiB = std::numeric_limits<size_t>::max() / bytesPerKiB;

  if (m_maximumSizeKiB > maximumKiB) {
    return std::numeric_limits<size_t>::max();
  }

  return m_maximumSizeKiB * bytesPerKiB;
}

bool ClientClipboardOptions::exceedsMaximumSizeBytes(size_t size) const
{
  return size > maximumSizeBytes();
}
