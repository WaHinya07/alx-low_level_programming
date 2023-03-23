#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - function that prints a string
 * @separator: the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Description: if separator is null,it should not be printed
 * if one string is null, print nil
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			printf(("nil"));
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
