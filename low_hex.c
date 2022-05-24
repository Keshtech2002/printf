#include "main.h"

/**
 * _print_x - takes an unsigned int and prints it in lowercase hex
 * @x: unsigned int to print
 *
 * Return: number of digits printed
 */

int _print_x(va_list x)
{
	return (_print_hex(va_arg(x, unsigned int), 0));
}
