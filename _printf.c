#include <stdarg.h>
#include "main.h"
#include "stdio.h"

/**
 * _printf - function that prints based on format specifier
 * @format: takes in format specifier
 * Return: the number of characters printed 
 */

int _printf(const char *format, ...)
{
	int i, num, k = 0;
	va_list args;
	char *str;
	int count = 0;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count = count + 1;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_print_char(va_arg(args, int));
				count = count + 1;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				_print_str(str);
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_print_char('%');
				count = count + 1;
			}
			else if (format[i + 1] == 'd')
			{
				i++;
				num = va_arg(args, int);
				print_num(num);
			}
		}
	}
	
	va_end(args);
	return (count);
}
