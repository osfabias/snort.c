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
  @file src/terminal_styles.c
  @brief Terminal style macros
  @author Ilya Buravov (ilburale@gmail.com)
*/

#pragma once

/* Start and end style markers */
#define STYLE_START "\x1b["
#define STYLE_END   "m"

/* Reset */
#define STYLE_RESET STYLE_START "0" STYLE_END

/* Font */
#define BOLD ";1"
#define DIM  ";2"

/* 8-color foreground */
#define FG_BLACK   ";30"
#define FG_RED     ";31"
#define FG_GREEN   ";32"
#define FG_YELLOW  ";33"
#define FG_BLUE    ";34"
#define FG_MAGENTA ";35"
#define FG_CYAN    ";36"
#define FG_WHITE   ";37"

/* Bright foreground */
#define FG_BBLACK   ";90"
#define FG_BRED     ";91"
#define FG_BGREEN   ";92"
#define FG_BYELLOW  ";93"
#define FG_BBLUE    ";94"
#define FG_BMAGENTA ";95"
#define FG_BCYAN    ";96"
#define FG_BWHITE   ";97"

/* 8-color background */
#define BG_BLACK   ";40"
#define BG_RED     ";41"
#define BG_GREEN   ";42"
#define BG_YELLOW  ";43"
#define BG_BLUE    ";44"
#define BG_MAGENTA ";45"
#define BG_CYAN    ";46"
#define BG_WHITE   ";47"

/* Bright background */
#define BG_BBLACK   ";100"
#define BG_BRED     ";101"
#define BG_BGREEN   ";102"
#define BG_BYELLOW  ";103"
#define BG_BBLUE    ";104"
#define BG_BMAGENTA ";105"
#define BG_BCYAN    ";106"
#define BG_BWHITE   ";107"
