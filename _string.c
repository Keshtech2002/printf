#include "main.h"

/**
 * _print_str - prints strings for _printf
 * @s: string to print
 * Return: 
 */

int _print_str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
