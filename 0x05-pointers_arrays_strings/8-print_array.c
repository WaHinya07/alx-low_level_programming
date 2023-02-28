#include "main.h"
/**
 * print_array - function prints an array of integers
 * Description: Numbers should be separated by a comma and space
 * @n: Number of elements of the array to be printed
 * @a: Array pointer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
