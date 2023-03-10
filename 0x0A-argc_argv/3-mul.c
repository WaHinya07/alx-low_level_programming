#include <stdio.h>
#include "main.h"
/**
 * main - Prints a progarm that multiplies 2 numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (success),otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j *= _atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
