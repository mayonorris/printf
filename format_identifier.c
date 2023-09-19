#include "main.h"

/**
 * format_identifier - selects the appropriate specifiers
 * @args: number of arguements
 * @count_char: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int format_identifier(const char *format, va_list args, int count_char)
{
	switch (*format)
	{
	
		case 'c':
			_putchar(va_arg(args, int));
			count_char++;
			break;
		case 's':
			count_char = printf_string(args, count_char);
			break;
		case '%':
			_putchar('%');
			count_char++;
			break;
		default:
			break;
	}
	return (count_char);
}

