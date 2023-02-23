#include "main.h"
/**
 * more_numbers - Prints numbers 10 times
 * Description: Numbers to be printed are 0 to 14
 * followed by a new line
 * Return: void
 */
void more_numbers(void)
{
	int count;
	int number;

	for (count = 0; count <= 9; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}
