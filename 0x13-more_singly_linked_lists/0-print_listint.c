#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Prints all elements in a list
 * @h: pointer to the first node of the list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;

	while (h)
	{
		printf("[%d]\n", h->n);
		nodes_num++;
		h = h->next;
	}
	return (nodes_num);
}
