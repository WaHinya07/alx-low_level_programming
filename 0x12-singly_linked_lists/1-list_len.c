#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints the number of elements in a linked
 * list
 * @h: Pointer to the firs or head element in list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t elem;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
