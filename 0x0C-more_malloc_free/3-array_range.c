#include <stdlib.h>
#include "main.h"
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
	int *arr;
	int i;
	int length;

	if (min > max)
	{
		return (NULL);
	}

	length = 0;

	for (i = 0; i <= max; i++)
	{
		length++;
	}

	arr = malloc(sizeof(int) * length);

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
