#include "main.h"

/**
 * _islower - Entry point
 * Description: Checks for a lower case character
 * @c: The character to be checked
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
