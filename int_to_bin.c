#include "main.h"

/**
 * print_b - takes an unsigned int and prints it in binary notation
 * @b: unsigned in to print
 * @m: (2 ^ 31) 2147483648
 * Return: number of digits printed
 */

int _print_b(va_list b)
{
	unsigned int x, y, j, add;
	unsigned int c[32];
	int count;

	y = va_arg(b, unsigned int);
	x = 2147483648;
	c[0] = y / x;
	for (j = 1; j < 32; j++)
	{
		x = x / 2;
		c[i] = (y / x) % 2;
	}
	for (j = 0, add = 0, count = 0; j < 32; j++)
	{
		add = add + c[i];
		if (add || j == 31)
		{
			_putchar('0' + c[j]);
			count = count + 1;
		}
	}
	return (count);
}
