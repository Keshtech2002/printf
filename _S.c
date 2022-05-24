#include "main.h"

/**
 * _print_S - prints a sting and noprintable character ascii values
 * @S: string for printing
 * Return: number of chars printed
 */
int _print_S(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count = count + 2;
			count = count + hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count = count + 1;
		}
	}
	return (count);
}
