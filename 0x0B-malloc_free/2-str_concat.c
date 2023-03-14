#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: destination string to be modified
 * @s2: source string to be joined to s1
 * Return: Pointer with s1 and s2 contents in a newly
 * allocated memory
 * Null if string is empty or if program fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i;
	
	int length = 0;
	int concat_length =0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_length++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_length++] = s2[i];

	return (concat_str);
}

