#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - gives the number of bits to flip
 * to get from one number to another
 * @n: first unsigned integer
 * @m: second unsigned integer
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int numof_bits = 0;

	while (xor_value != 0)
	{
		if (xor_value & 1)
		{
			numof_bits++;
		}
		xor_value >>= 1;
	}
	return (numof_bits);
}
