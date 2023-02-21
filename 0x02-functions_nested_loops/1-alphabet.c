#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: Print alphabet in lowercase,
 * followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
