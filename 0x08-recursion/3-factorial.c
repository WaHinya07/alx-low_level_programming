#include "main.h"
/**
 * factorial - Function returns the factorial of a number
 * @n: The given number to find the factorial of
 * Return: if  n < 0 return -1
 * if n == 0 return 1
 * if n > 0 return factorial of n
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));

	result *= (n * factorial(n - 1));

	return (result);
}
