#include "main.h"
/**
 * _strchr - Function locares a character in a string
 * @s: The string to be tested
 * @c : The character to be located
 * Return: The character in question, otherwise, 0
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (0);
	}
	return (0);
}
