#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: Pointer to the value to bit value to be set
 * @index: The index, starting from 0 of the bit to be set
 * Return: 1 if successful, -1 upon error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1UL << index);

	return (1);
}
