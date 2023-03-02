#include "main.h"
/**
 * _strncpy - Function copies a string
 * @src: Pointer to the string to be appended
 * @dest: Pointer to the string to be modified
 * @n: Characters to be copied from src the dest string
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
