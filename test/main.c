#include "../main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int main(void)
{
	int n = 0;
	
	n = _printf("%d\n", 2650);

	printf("n = %d\n", n);
	
	n = printf("%d\n", 2650);

	printf("n = %d\n", n);

	return 0;
}
