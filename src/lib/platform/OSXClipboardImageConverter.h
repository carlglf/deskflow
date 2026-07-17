/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#pragma once

#include "platform/OSXClipboardAnyBitmapConverter.h"

//! Convert native macOS image pasteboard data to the shared DIB format.
class OSXClipboardImageConverter : public OSXClipboardAnyBitmapConverter
{
public:
  OSXClipboardImageConverter(CFStringRef osxFormat, const char *imageFormat);
  ~OSXClipboardImageConverter() override = default;

  CFStringRef getOSXFormat() const override;

protected:
  std::string doFromIClipboard(const std::string &) const override;
  std::string doToIClipboard(const std::string &) const override;

private:
  CFStringRef m_osxFormat;
  const char *m_imageFormat;
};
