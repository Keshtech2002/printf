#include "main.h"

/**
 * _print_i - prints an integer of base10
 * @i: integer to print
 *
 * Return: number of digits printed
 */

int _print_i(va_list i)
{
	int a[10];
	int k, x, y, add, count;

	y = va_arg(i, int);
	count = 0;
	x = 1000000000;
	a[0] = y / x;

	for (k = 1; k < 10; k++)
	{
		x = x / 10;
		a[k] = (y / x) % 10;
	}

	if (y < 0)
	{
		_putchar('-');
		count = count + 1;
		for (k = 0; k < 10; k++)
			a[k] *= -1;
	}

	for (k = 0, add = 0; k < 10; k++)
	{
		add = add + a[k];
		if (add != 0 || k == 9)
		{
			_putchar('0' + a[k]);
			count = count + 1;
		}
	}

	return (count);
}
