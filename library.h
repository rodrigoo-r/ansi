/*
 * This code is distributed under the terms of the GNU General Public License.
 * For more information, please refer to the LICENSE file in the root directory.
 * -------------------------------------------------
 * Copyright (C) 2025 Rodrigo R.
 * This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
 * This is free software, and you are welcome to redistribute it
 * under certain conditions; type `show c' for details.
*/

#ifndef FLUENT_LIBC_ANSI_LIBRARY_H
#define FLUENT_LIBC_ANSI_LIBRARY_H

// ============= FLUENT LIB C =============
// ANSI Escape Code Definitions
// ----------------------------------------
// Provides macros for colored and styled terminal output via ANSI escape codes.
// Includes:
//   - Basic 8-color definitions (e.g., ANSI_RED, ANSI_GREEN)
//   - Bright variants (e.g., ANSI_BRIGHT_RED)
//   - Bold variants for better emphasis
//
// Usage:
//   - These macros are string literals to be inserted into `printf()` or any other
//     terminal output function that supports ANSI sequences.
//
// Example:
// ----------------------------------------
//   printf(ANSI_RED "Error: Something went wrong!" ANSI_RESET "\n");
//   printf(ANSI_BOLD_BRIGHT_GREEN "✓ Success" ANSI_RESET "\n");
//
// Notes:
//   - Make sure the output terminal supports ANSI escape sequences.
//   - On Windows, older terminals (pre-Windows 10) might not support these codes
//     without enabling virtual terminal processing.
//
// No external dependencies.

#    define ANSI_RESET "\033[0m"
#    define ANSI_BLACK "\033[30m"
#    define ANSI_RED "\033[31m"
#    define ANSI_GREEN "\033[32m"
#    define ANSI_YELLOW "\033[33m"
#    define ANSI_BLUE "\033[34m"
#    define ANSI_PURPLE "\033[35m"
#    define ANSI_CYAN "\033[36m"
#    define ANSI_WHITE "\033[37m"
#    define ANSI_BRIGHT_BLACK "\033[90m"
#    define ANSI_BRIGHT_RED "\033[91m"
#    define ANSI_BRIGHT_GREEN "\033[92m"
#    define ANSI_BRIGHT_YELLOW "\033[93m"
#    define ANSI_BRIGHT_BLUE "\033[94m"
#    define ANSI_BRIGHT_PURPLE "\033[95m"
#    define ANSI_BRIGHT_CYAN "\033[96m"
#    define ANSI_BRIGHT_WHITE "\033[97m"
#    define ANSI_BOLD "\033[1m"
#    define ANSI_BOLD_BRIGHT_BLUE "\033[1;94m"
#    define ANSI_BOLD_BRIGHT_GREEN "\033[1;92m"
#    define ANSI_BOLD_BRIGHT_RED "\033[1;91m"
#    define ANSI_BOLD_BRIGHT_YELLOW "\033[1;93m"
#    define ANSI_BOLD_BRIGHT_PURPLE "\033[1;95m"

#endif //FLUENT_LIBC_ANSI_LIBRARY_H