#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: String to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	while (length--)
		_putchar(s[length]);
	_putchar('\n');
}
