#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Function allocates memory for an array
 * of nmemb elements of size bytes each
 * @nmemb: Number of elements in the array
 * @size: size of each elements in bytes
 * Description: memory is set to 0
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * Otherwise pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
