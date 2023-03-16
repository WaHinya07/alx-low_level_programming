#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * array_range - Function creates an array of integers with a
 * range of min and max values included
 * Description: range is ordered from min to max
 * @min: first value of the array
 * @max: last value of the array
 * Return: Pointer to newly created array
 * if min > max, null
 * if malloc fails, null
 */
int *array_range(int min, int max)
{
	int index;
	int *pointer;
	int len;

	if (min > max)
	{
		return (NULL);
	}

	len = 0;
	for (index = min; index <= max; index++)
	{
		len++;
	}

	pointer = malloc(sizeof(int) * len);
	if (pointer == NULL)
	{
		return (NULL);
	}

	index = 0;
	while (min <= max)
	{
		pointer[index] = min;
		index++;
		min++;
	}
	return (pointer);
}
