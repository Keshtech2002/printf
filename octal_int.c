#include "main.h"

/**
 * _print_o - takes an unsigned int and prints it in octal
 * @o: unsigned int to print
 * @m: 8 ^ 10
 * Return: number of digits printed
 */

int _print_o(va_list o)
{
	unsigned int j[11];
	unsigned int i, m, n, add;
	int count;

	n = va_arg(o, unsigned int);
	m = 1073741824;
	j[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		j[i] = (n / m) % 8;
	}
	for (i = 0, add = 0, count = 0; i < 11; i++)
	{
		add = add + j[i];
		if (add || i == 10)
		{
			_putchar('0' + j[i]);
			count = count + 1;
		}
	}
	return (count);
}
