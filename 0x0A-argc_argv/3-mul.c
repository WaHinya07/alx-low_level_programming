#include <stdio.h>
#include "main.h"
/**
 * main - Prints a progarm that multiplies 2 numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (success), otherwise return 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
