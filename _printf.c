#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - returns the number of characters
 * @format: A string containing format specifiers.
 * Return: The number of characters that would be printed.
 */
int _printf(const char *format, ..)
{
	int num_of _char = 0;

	va_list args_list;
	if(format == NULL)
	{
		return (-1);
	}
	va_start(args_list, format);
	while(*format)
	{
		if(*format != '%')
		{
			write(1,format,1);
			num_of _char++;
		}
		else
		{
			format++;
			if(*format == '\0')
				break;
			if(*format =='%')
			{
				write(1,format,1);
				num_of _char++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args_list, int)

				write (1, &c,1);
				num_of _char++;
			}
			else if(*format == 's')
			{
				char *char_ar = va_arg(list_of_args, char*);
				int len=0;
				    while(char_ar[len] !='\0') 
					    len++;
				    write(1,char_ar,len);
				    num_of _char += len;

			}
		}
		format++
	}
	va_end(args_list);
	return (num_of _char );
}
