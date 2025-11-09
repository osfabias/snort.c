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

#include <stdbool.h>
#include <stddef.h>
#include <time.h>

#include "snort/apidef.h"
#include "snort/entry.h"
#include "snort/level.h"
#include "snort/utils.h"

/*
  @brief Logs entry
  @param entry Entry to log
*/
__SNORT_API__ void log_entry (const LogEntry *entry);

/*
  @brief Logs entry of `trace` level
  @param msg Entry detail message
*/
#define trace(msg)                                                \
  do                                                              \
  {                                                               \
    const LogEntry entry = make_log_entry (msg, LOG_LEVEL_TRACE); \
    log_entry (&entry);                                           \
  }                                                               \
  while (false)

/*
  @brief Logs entry of `debug` level
  @param msg Entry detail message
*/
#define debug(msg)                                                \
  do                                                              \
  {                                                               \
    const LogEntry entry = make_log_entry (msg, LOG_LEVEL_DEBUG); \
    log_entry (&entry);                                           \
  }                                                               \
  while (false)

/*
  @brief Logs entry of `info` level
  @param msg Entry detail message
*/
#define info(msg)                                                \
  do                                                             \
  {                                                              \
    const LogEntry entry = make_log_entry (msg, LOG_LEVEL_INFO); \
    log_entry (&entry);                                          \
  }                                                              \
  while (false)

/*
  @brief Logs entry of `warning` level
  @param msg Entry detail message
*/
#define warning(msg)                                                \
  do                                                                \
  {                                                                 \
    const LogEntry entry = make_log_entry (msg, LOG_LEVEL_WARNING); \
    log_entry (&entry);                                             \
  }                                                                 \
  while (false)

/*
  @brief Logs entry of `error` level
  @param msg Entry detail message
*/
#define error(msg)                                                \
  do                                                              \
  {                                                               \
    const LogEntry entry = make_log_entry (msg, LOG_LEVEL_ERROR); \
    log_entry (&entry);                                           \
  }                                                               \
  while (false)

/*
  @brief Logs entry of `fatal` level
  @param msg Entry detail message
*/
#define fatal(msg)                                                \
  do                                                              \
  {                                                               \
    const LogEntry entry = make_log_entry (msg, LOG_LEVEL_FATAL); \
    log_entry (&entry);                                           \
  }                                                               \
  while (false)
