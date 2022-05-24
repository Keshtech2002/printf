#include "main.h"

/**
 * _print_u - prints an unsigned integer in decimal
 * @u: unsigned int to print
 * @x: 1000000000 (10 ^ 9)
 * Return: number of digits printed
 */

int _print_u(va_list u)
{
	unsigned int c[10];
	unsigned int j, x, y, add;
	int count;

	y = va_arg(u, unsigned int);
	x = 1000000000;
	c[0] = y / x;
	for (j = 1; j < 10; j++)
	{
		x = x / 10;
		c[j] = (y / x) % 10;
	}
	for (j = 0, add = 0, count = 0; j < 10; j++)
	{
		add = add + c[j];
		if (add || j == 9)
		{
			_putchar('0' + c[j]);
			count++;
		}
	}
	return (count);
}
