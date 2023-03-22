#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: array to be iterated
 * @size: size of the array
 * @action: pointer to the function
 * Return: Always 0 (success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t arr;

	if (array == NULL || action == NULL)
		return;
	for (arr = 0; arr < size; arr++)
	{
		action(array[arr]);
	}
}
