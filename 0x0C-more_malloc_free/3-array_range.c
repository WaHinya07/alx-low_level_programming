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

	length = max - (min + 1);

	arr = malloc(sizeof(int) * length);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
		arr[i] = min++;

	return (arr);
}
