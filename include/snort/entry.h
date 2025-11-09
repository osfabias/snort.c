/*
  Copyright 2025 Osfabias

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

/*
  @file include/snort/entry.h
  @brief Log entry struct
  @author Ilya Buravov (ilburale@gmail.com)
*/

#pragma once

#include <stdint.h>

#include "snort/level.h"


// Log entry
typedef struct
{
  const char *const file_path;    // A path to the file being logged.
  const uint32_t    line_number;  // Source line number where the log entry originate.
  const LogLevel    level;        // Message severity.
  const char *const text;         // Message text.
} LogEntry;
