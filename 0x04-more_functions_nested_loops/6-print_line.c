#include "main.h"
/**
 * print_line - function that draws a straight line in terminal
 * Description: n is the number of times the character n should be printed
 * Return: void
 */
void print_line(int n)
{
	int count = 0;

	while (n > 0 && count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
