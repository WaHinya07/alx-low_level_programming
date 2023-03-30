#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements in a list
 * @h: pointer to the head or first element of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		counter++;
		h = h->next;
	}
	return (counter);
}
