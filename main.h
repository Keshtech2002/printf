#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct print_type - structure for printing various types
 * @typ: type to print
 * @func: function to print
 */

typedef struct print_struct
{
	char *typ;
	int (*func)(va_list);
} print_type;

int _putchar(char c);
int _printf(const char *format, ...);
int (*specifier(const char *format))(va_list);
int _print_c(va_list c);
int _print_s(va_list s);
int _print_d(va_list d);
int _print_i(va_list i);

#endif
