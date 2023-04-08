#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 * Return: converted number or NULL if b is empty
 * 0 if there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int index;

	if (b == NULL)
	{
		return (0);
	}
	res = 0;

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] == '1')
		{
			res = res << 1 | 1;
		}
		else if (b[index] == '0')
		{
			res = res << 1;
		}
		else
		{
			return (0);
		}
	}
	return (res);
}
