#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Function  concatenates two strings
 * @s1: destination string to be modified or copied into
 * @s2: source string to be copied to s1
 * @n: number of bytes to be used
 * Description: pointer should contain s1 followed by
 * the first n bytes of s2, and null terminated
 * Return: Null if function fails
 * pointer to the a newly allocated space in memory
 * if n>=s2, use entire s2
 * if null is passed treat string as empty
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
