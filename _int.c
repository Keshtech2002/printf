#include "main.h"

/**
 * _print_int - prints integer for _printf
 * @num: number to print
 * Return: number
 */

int print_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -(num);
	}
	if (num > 9)
		print_num(num / 10);

	_putchar((num % 10) + '0');
	
	return (0);
}
