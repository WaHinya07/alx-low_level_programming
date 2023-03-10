#include "main.h"
/**
 * _memset - function fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: Constant byte
 * @n: Number of bytes to be copied
 * Return: pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
