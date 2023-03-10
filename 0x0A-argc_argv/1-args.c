#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: The number of arguments on the command line
 * @argv: The argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
