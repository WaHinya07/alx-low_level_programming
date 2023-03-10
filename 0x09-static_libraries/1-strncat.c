#include "main.h"
/**
 * _strncat - This function concatenates two strings
 * Description: Function uses a n bytes from src
 * do not null-terminate src if it contains n or more bytes
 * @src: Pointer to string to be appended
 * @dest: pointer to string to be modified
 * @n: Number of bytes used
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < n)
	{
	dest[index] = '\0';
	}
	return (dest);
}
