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
	int i, x, y, add, count;

	y = va_arg(i, int);
	count = 0;
	x = 1000000000;
	a[0] = y / x;

	for (i = 1; i < 10; i++)
	{
		x = x 10;
		a[i] = (y / x) % 10;
	}

	if (y < 0)
	{
		_putchar('-');
		count = count + 1;
		for (i = 0; i < 10; i++)
			a[i] = a[i] -1;
	}

	for (i = 0, add = 0; i < 10; i++)
	{
		add = add + a[i];
		if (add != 0 || i == 9)
		{
			_putchar('0' + a[i]);
			count = count + 1;
		}
	}

	return (count);
}
