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
	char *joined;
	unsigned int a, length;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		length++;

	joined = malloc(sizeof(char) * n + (length + 1));

	if (joined == NULL)
	{
		return (NULL);
	}

	length = 0;
	a = 0;

	for (a = 0; s1[a]; a++)
		joined[length++] = s1[a];

	for (;a = 0; s2[a]; &&a < n; a++)
		joined[length++] = s2[a];

	joined = '\0';
	{
		return (joined);
	}
}
