#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - prints the number of elements in a list
 * @h: Pointer to the first element of the list
 * Return: Number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t elem_num = 0;

	while (h != NULL)
	{
		elem_num++;
		h = h->next;
	}
	return (elem_num);
}
