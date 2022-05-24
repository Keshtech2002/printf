#include "main.h"

/**
 * print_hex - prints an unsigned int in hexidecimal form
 * @n: unsigned int to print
 * @c: to determine case of printing 0 = lower, 1 = upper
 * @m: 16 ^ 7
 * Return: number of digits printed
 */

int _print_hex(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m, add;
	char diff;
	int count;

	m = 268435456;
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m = m / 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, add = 0, count = 0; i < 8; i++)
	{
		add = add + a[i];
		if (add || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			count = count + 1;
		}
	}
	return (count);
}
