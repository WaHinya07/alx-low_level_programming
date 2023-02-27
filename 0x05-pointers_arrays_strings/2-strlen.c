#include "main.h"
/**
 * _strlen - Writes a function that returns the length of a string.
 * @s: String to be returned
 * Return: Length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
