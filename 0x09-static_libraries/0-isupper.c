#include "main.h"
/**
 * _isupper - checks if the letter is uppercase
 * @c: The character to be checked
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
