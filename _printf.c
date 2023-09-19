#include "main.h"
/**
 * _printf - returns the number of characters
 * @format: A string containing format specifiers.
 * Return: The number of characters that would be printed.
 */
int _printf(const char *format, ...)
{
	int count_char = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count_char = format_identifier(format, args, count_char);
			format++;
		}
		else
		{
			_putchar(*format);
			count_char++;
			format++;
		}
	}
	va_end(args);
	return (count_char);
}

