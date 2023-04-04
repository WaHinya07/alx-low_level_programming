#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - gives back the nth node of a linked list
 * @head: Poiter to the first element of the list
 * @index: is the index of the node, starting at 0
 * Return: nth node of a linked list otherwise 0
 * if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
