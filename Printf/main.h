#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

/* Function Prototypes */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent();

#endif /* MAIN_H */

