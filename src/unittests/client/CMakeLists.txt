# SPDX-FileCopyrightText: (C) 2026 Deskflow Developers
# SPDX-License-Identifier: MIT

create_test(
  NAME ClientClipboardOptionsTests
  DEPENDS client
  LIBS app
  SOURCE ClientClipboardOptionsTests.cpp
  WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/src/lib/client"
)
