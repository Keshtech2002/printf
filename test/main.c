#include "../main.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	unsigned int ui = (unsigned int)INT_MAX + 1024;

	_printf("%o, %x, %X, %u\n", ui, ui, ui, 98);
	return (0);
}
