#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Function that searches for an integer
 * in a given array size
 * @array: The array to be searched
 * @size: The size of the said array
 * @cmp: Pointer to the function, used to compare values
 * Return: -1 if there are no matches
 * if size <=0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if ((cmp(array[index])) == 1)
			return (index);
	}
	return (-1);
}

