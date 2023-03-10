#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers.
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i, product;

	product = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		product = product * atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}
