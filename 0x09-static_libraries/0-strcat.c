#include "main.h"
/**
 * _strcat - Function that concatenates two strings by
 * appending src string to dest string
 * @dest: A pointer to the string to be modified
 * @src: A pointer to the string to be appended to the dest string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
