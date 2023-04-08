#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the order in which the bytes
 * of a multi-byte value are stored in computer memory
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int number = 1;
	char *e = (char *)&number;

	if (*e == 1)
		return (1);
	else
		return (0);
}
