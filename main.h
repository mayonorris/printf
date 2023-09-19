#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
int _putchar(char character);
int _printf(const char *format, ...);
int format_identifier(const char *format, va_list args, int count_char);
#endif
