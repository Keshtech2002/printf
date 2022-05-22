#include "../main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int main(void)
{
	int n = 0;
	
	n = _printf("%c %d %s %%\n", 'M', 2650, "MUSAB");

	printf("n = %d\n", n);
	
	n = printf("%c %d %s %%\n", 'M', 2650, "MUSAB");

	printf("n = %d\n", n);

	return 0;
}
