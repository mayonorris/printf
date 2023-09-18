#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - returns the number of characters
 * @format: A string containing format specifiers.
 * Return: The number of characters that would be printed.
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	int count = 0;

	for (int i = 0; i < strlen(format); i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += 1;
					break;
				case 's':
					count += strlen(va_arg(args, char*));
					break;
				case '%':
					count += 1;
					break;
				default:
					/*Skip unsupported format specifiers*/
					i++;
			}
		}
		else
		{
			count += 1;
		}
	}
	va_end(args);
	return (count - 1);
}
