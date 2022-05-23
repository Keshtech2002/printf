#include "main.h"

/**
 * _print_c - prints the character for the _printf
 * @c: character to print 
 * Return: 1
 */

int _print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}
