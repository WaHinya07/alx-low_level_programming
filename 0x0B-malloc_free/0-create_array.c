#include <stdlib.h>
#include "main.h"
/**
 * create_array - function creates an array of chars and
 * initializes it with a specific character
 * @size: size of the array
 * @c: specific character to be initialized
 * Return: NULL if size is 0, a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i;

	my_array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (my_array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		my_array[i] = c;
	}
	return (my_array);
}
