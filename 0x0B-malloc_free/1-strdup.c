#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Function returns a pointer to a newly allocated
 * space in memory containing a copy of the string
 * @str: The string to be copied
 * Return: NULL if str = 0
 * Pointer to the duplicated str on success
 * NULL if memory is insufficient
 */
char *_strdup(char *str)
{
	char *my_duplicate;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	my_duplicate = malloc(sizeof(char) * (len + 1));

	if (my_duplicate == 0)
		return (NULL);

	for (i = 0; str[i]; i++)
		my_duplicate[i] = str[i];

	my_duplicate[len] = '\0';
	return (my_duplicate);
}
