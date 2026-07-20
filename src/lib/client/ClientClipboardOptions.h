/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#pragma once

#include "deskflow/OptionTypes.h"

#include <cstddef>

class ClientClipboardOptions
{
public:
  static constexpr size_t kDefaultMaximumSizeKiB = 3 * 1024;

  void reset();
  bool setOptions(const OptionsList &options);

  bool isEnabled() const;
  size_t maximumSizeKiB() const;
  size_t maximumSizeBytes() const;
  bool exceedsMaximumSizeBytes(size_t size) const;

private:
  bool m_sharingEnabled = true;
  size_t m_maximumSizeKiB = kDefaultMaximumSizeKiB;
};
