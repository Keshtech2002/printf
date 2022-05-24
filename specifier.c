#include "main.h"

/**
 * specifier - handles specifier
 * @format: format string
 * @args: va_list
 * Return: function to count
 */

int (*specifier(const char *format))(va_list args)
{
	int i;

	print_type j[] = {
		{"c", _print_c},
		{"s", _print_s},
		{"d", _print_d},
		{"i", _print_i},
		{"b", _print_b},
		{"u", _print_u},
		{"X", _print_X},
		{"x", _print_x},
		{"o", _print_o},
		{"S", _print_S},
		{"r", _print_r},
		{NULL, NULL}
	};

	for (i = 0; j[i].typ != NULL; i++)
	{
		if (*(j[i].typ) == *format)
			break;
	}

	return (j[i].func);
}
