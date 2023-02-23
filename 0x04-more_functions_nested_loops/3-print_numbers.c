#include "main.h"
/**
 * print_numbers - prints numbers
 * Description: Numbers to be printed are 0 to 9
 * Return: values 0 to 9
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
