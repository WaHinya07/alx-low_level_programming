#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - adds all parameters provided
 * @n: first integer in the list to be added and is constant
 * @...: other integers to follow
 * Return: sum of all parameters
 * if n is 0,result is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int total;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);
	total = 0;

	for (i = 0; i < n; i++)
		total += va_arg(numbers, int);

	va_end(numbers);
	{
		return (total);
	}
}
