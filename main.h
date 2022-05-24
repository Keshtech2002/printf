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
int _print_b(va_list b);
int _print_u(va_list u);
int _print_x(va_list x);
int _print_X(va_list X);
int _print_o(va_list o);
int _print_hex(unsigned int n, unsigned int c);
int _print_S(va_list S);
int hex_print(char c);
int _print_r(va_list r);
int _print_p(va_list p);
unsigned long _power(unsigned int base, unsigned int exponent);
int _print_R(va_list R);

#endif
