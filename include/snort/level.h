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
  @file include/snort/level.h
  @brief Log level enum
  @author Ilya Buravov (ilburale@gmail.com)
*/

#pragma once

/* Log entry level */
typedef enum
{
  LOG_LEVEL_TRACE,    // Low-level implementation details.
  LOG_LEVEL_DEBUG,    // Information about the current state of the program.
  LOG_LEVEL_INFO,     // Informational or success messages.
  LOG_LEVEL_WARNING,  // Warnings (you got it).
  LOG_LEVEL_ERROR,    // Non-fatal errors that do not crush the program.
  LOG_LEVEL_FATAL     // Fatal errors that do crush the program.
} LogLevel;
