#include "main.h"

/**
 * _print_s - prints strings for _printf
 * @s: string to print
 * Return: number of characters printed
 */

int _print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}

	return (count);
}
