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
  @file src/logging.c
  @brief Logging functions implementation
  @author Ilya Buravov (ilburale@gmail.com)
*/

#include <stdio.h>
#include <time.h>

#include "snort/entry.h"
#include "snort/level.h"
#include "snort/logging.h"

#include "src/terminal_styles.h"


/*=============================================================================
   DECLARATIONS
 *=============================================================================*/

/*
  @brief Prints passed timestamp
  @param timestamp Timestamp to print
*/
void print_timestamp (time_t timestamp);

/*
  @brief Prints entry origin details
  @param entry Entry to print origin details of
*/
void print_entry_origin_details (const LogEntry *entry);

/*
  @brief Prints specified log level prefix
  @param level Log level to print prefix of
*/
void print_log_level_tag (LogLevel level);

/*=============================================================================
   IMPLEMENTATIONS
 *=============================================================================*/

void log_entry (const LogEntry *const entry)
{
  print_timestamp (entry->timestamp);
  print_entry_origin_details (entry);
  print_log_level_tag (entry->level);
  puts (entry->message);
}

void print_timestamp (const time_t timestamp)
{
  static char              buffer[ 32 ];
  static const char *const time_format =
    STYLE_START            DIM STYLE_END " [%H:%M:%S] " STYLE_RESET;

  const struct tm *const time_info = localtime (&timestamp);

  strftime (buffer, sizeof (buffer) / sizeof (buffer[ 0 ]), time_format, time_info);
  fputs (buffer, stdout);
}

void print_entry_origin_details (const LogEntry *entry)
{
  printf (
    STYLE_START DIM STYLE_END "(%s:%d) " STYLE_RESET, entry->file_path, entry->line_number
  );
}

void print_log_level_tag (LogLevel level)
{
  static const char *const log_level_tags[ LOG_LEVEL_COUNT ] = {
    STYLE_START        DIM STYLE_END "trace   | ",
    STYLE_START        FG_BLUE STYLE_END "debug" STYLE_RESET "   | ",
    STYLE_START        FG_GREEN STYLE_END "info" STYLE_RESET "    | ",
    STYLE_START        FG_YELLOW STYLE_END "warning" STYLE_RESET " | ",
    STYLE_START        FG_RED STYLE_END "error" STYLE_RESET "   | ",
    STYLE_START BG_RED FG_BWHITE STYLE_END " fatal " STYLE_RESET " | "
  };

  fputs (log_level_tags[ level ], stdout);
}
