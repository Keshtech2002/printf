#include "main.h"

/**
 * _print_b - takes an unsigned int and prints it in binary notation
 * @b: unsigned in to print
 * @m: (2 ^ 31) 2147483648
 * Return: number of digits printed
 */

int _print_b(va_list b)
{
	unsigned int n, m, i, add;
	unsigned int a[32];
	int count;

	n = va_arg(b, unsigned int);
	m = 2147483648;
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m = m / 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, add = 0, count = 0; i < 32; i++)
	{
		add = add + a[i];
		if (add || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
