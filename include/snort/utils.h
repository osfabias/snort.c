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
  @file include/snort/utils.h
  @brief Utility functions and macros
  @author Ilya Buravov (ilburale@gmail.com)
*/

#pragma once

#include <stddef.h>
#include <time.h>

/*
  @brief Initializes LogEntry struct and automatically sets `file_path`, `format`
         and `timestamp`
  @param fmt Format string (printf-style) or plain message string
  @param lvl Log level
*/
#define make_log_entry(fmt, lvl) \
  {                              \
    .file_path   = __FILE__,     \
    .format      = fmt,          \
    .timestamp   = time (NULL),  \
    .line_number = __LINE__,     \
    .level       = lvl,          \
  }
