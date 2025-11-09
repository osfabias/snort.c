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
  @file include/snort/logging.h
  @brief Logging functions and macros
  @author Ilya Buravov (ilburale@gmail.com)
*/

#pragma once

#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <time.h>

#include "snort/apidef.h"
#include "snort/entry.h"
#include "snort/level.h"
#include "snort/utils.h"

/*
  @brief Logs entry
  @param entry Entry to log
  @param ... Variable arguments for formatting (if format string has placeholders)
*/
__SNORT_API__ void log_entry (const LogEntry *entry, ...);

/*
  @brief Logs entry of `trace` level
  @param fmt Format string (printf-style) or plain message
  @param ... Variable arguments for formatting
*/
#define trace(fmt, ...)                                           \
  do                                                              \
  {                                                               \
    const LogEntry entry = make_log_entry (fmt, LOG_LEVEL_TRACE); \
    log_entry (&entry, ##__VA_ARGS__);                            \
  }                                                               \
  while (false)

/*
  @brief Logs entry of `debug` level
  @param fmt Format string (printf-style) or plain message
  @param ... Variable arguments for formatting
*/
#define debug(fmt, ...)                                           \
  do                                                              \
  {                                                               \
    const LogEntry entry = make_log_entry (fmt, LOG_LEVEL_DEBUG); \
    log_entry (&entry, ##__VA_ARGS__);                            \
  }                                                               \
  while (false)

/*
  @brief Logs entry of `info` level
  @param fmt Format string (printf-style) or plain message
  @param ... Variable arguments for formatting
*/
#define info(fmt, ...)                                           \
  do                                                             \
  {                                                              \
    const LogEntry entry = make_log_entry (fmt, LOG_LEVEL_INFO); \
    log_entry (&entry, ##__VA_ARGS__);                           \
  }                                                              \
  while (false)

/*
  @brief Logs entry of `warning` level
  @param fmt Format string (printf-style) or plain message
  @param ... Variable arguments for formatting
*/
#define warning(fmt, ...)                                           \
  do                                                                \
  {                                                                 \
    const LogEntry entry = make_log_entry (fmt, LOG_LEVEL_WARNING); \
    log_entry (&entry, ##__VA_ARGS__);                              \
  }                                                                 \
  while (false)

/*
  @brief Logs entry of `error` level
  @param fmt Format string (printf-style) or plain message
  @param ... Variable arguments for formatting
*/
#define error(fmt, ...)                                           \
  do                                                              \
  {                                                               \
    const LogEntry entry = make_log_entry (fmt, LOG_LEVEL_ERROR); \
    log_entry (&entry, ##__VA_ARGS__);                            \
  }                                                               \
  while (false)

/*
  @brief Logs entry of `fatal` level
  @param fmt Format string (printf-style) or plain message
  @param ... Variable arguments for formatting
*/
#define fatal(fmt, ...)                                           \
  do                                                              \
  {                                                               \
    const LogEntry entry = make_log_entry (fmt, LOG_LEVEL_FATAL); \
    log_entry (&entry, ##__VA_ARGS__);                            \
  }                                                               \
  while (false)
