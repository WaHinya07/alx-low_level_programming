#include <stdio.h>
/**
 * main - Prints the name of a program
 * @argc: Number of things entered into the command line
 * while running a file
 * @argv: String vales of the things enterd into the command line
 * while running a file
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
