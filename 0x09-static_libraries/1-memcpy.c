#include "main.h"
/**
 * _memcpy - Function copies memory area
 * @dest: Memory area where bytes are copied to
 * @src: Memory area where bytes are copied from
 * @n: Number of bytes copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);

}
