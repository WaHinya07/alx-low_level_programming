#include "main.h"

/**
 * _islower - Entry point
 * Description: Checks for a lower case character
 * @c: The character to be checked
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	int l = 'a';

	while (l <= 'z')
	{
		l++;
	}
	{
	/* parameters for int c */
	if (c == l)
	{
	return (1);
	}
	}
	return (0);
}
