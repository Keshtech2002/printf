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
		{NULL, NULL}
	};

	for (i = 0; j[i].typ != NULL; i++)
	{
		if (*(j[i].typ) == *format)
			break;
	}

	return (j[i].func);
}