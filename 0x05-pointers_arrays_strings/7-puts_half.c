#include "main.h"
/**
 * puts_half - prints half of a string
 * Description: only print second half of string
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
