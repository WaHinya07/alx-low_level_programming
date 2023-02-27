#include "main.h"
/**
 * _puts - Function that prints a string
 * followed by a new line to stout
 * @str: Pointer to a string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n')
}
