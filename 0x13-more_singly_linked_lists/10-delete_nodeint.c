#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted,should start
 * at 0
 * Return: 1 on success,-1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *current;
	listint_t *node_before;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;

		free(current);

		return (1);
	}

	node_before = NULL;

	for (idx = 0; current != NULL && idx < index; idx++)
	{
		node_before = current;
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	node_before->next = current->next;

	free(current);

	return (1);
}
