#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the bit value in question
 * @index: index starting from 0 of the bit in question
 * Return: value of the bit at index index or
 * -1 upon error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
