#include "main.h"

/**
 * _print_X - takes a unsigned int and prints it in uppercase hex
 * @X: unsigned int to print
 *
 * Return: number of digits printed
 */
int _print_X(va_list X)
{
	return (_print_hex(va_arg(X, unsigned int), 1));
}
