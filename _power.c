#include "main.h"

/**
 * _power - finds the exponent of a number
 * @base: base number
 * @exponent: power
 * Return: base ^ exponent
 */
unsigned long _power(unsigned int base, unsigned int exponent)
{
	unsigned int i;
	unsigned long ans = base;

	for (i = 1; i < exponent; i++)
		ans *= base;

	return (ans);
}
