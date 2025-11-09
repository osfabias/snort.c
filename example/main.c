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
  @file example/main.c
  @brief Example program demonstrating library usage
  @author Ilya Buravov (ilburale@gmail.com)
  @details This file provides a simple example of how to use the library.
           It demonstrates basic library initialization and function calls.
           This serves as a template for users to understand library usage.
*/

#include <stdlib.h>

#include <snort/logging.h>

int main (void)
{
  trace ("trace message!");
  debug ("debug message!");
  info ("info message!");
  warning ("warning message!");
  error ("error message!");
  fatal ("fatal message!");

  // Example usage of formatted logging macros
  const int   value = 42;
  const char *name  = "snort";

  trace ("formatted trace: value = %d", value);
  debug ("formatted debug: name = %s", name);
  info ("formatted info: %s version %d.%d", name, 0, 1);
  warning ("formatted warning: value %d is suspicious", value);
  error ("formatted error: failed to process %s (code: %d)", name, 404);
  fatal ("formatted fatal: system %s crashed with code %d", name, 500);

  return EXIT_SUCCESS;
}
