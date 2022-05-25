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
	int i = 0, count = 0;
	va_list args;
	int (*function)(va_list);

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count = count + 1;
		}

		if (!format[i])
			return (count);

		function = specifier(&format[i + 1]);
		if (function != NULL)
		{
			count = count + function(args);
			i = i + 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count = count + 1;
		if (format[i + 1] == '%')
			i = i + 2;
		else
			i++;
	}
	va_end(args);
	return (count);
}
