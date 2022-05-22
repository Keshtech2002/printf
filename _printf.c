#include <stdarg.h>
#include "main.h"
#include "stdio.h"

int print_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		/*count = count + 1;*/
		num = -(num);
	}AOA
	if (num > 9)
		print_num(num / 10);

	_putchar((num % 10) + '0');
	/*count = count + 1;*/
	return (0);
}

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
				_putchar(va_arg(args, int));
				count = count + 1;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				OB
				str = va_arg(args, char *);
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					count = count + 1;
					k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				count = count + 1;
			}
			else if (format[i + 1] == 'd')
			{
				i++;
				OB
				num = va_arg(args, int);
				print_num(num);
			}
		}
	}
	
	va_end(args);
	return (count);
}
