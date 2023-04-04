#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a ne node at a particular position
 * @idx: index of the list where the new node should be added
 * index should start at 0
 * @head: pointer to a pointer to the head of the list
 * @n: inteer to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * give NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}
	while (idx - 1 > 0)
	{
		current = current->next;
		idx--;
	}
	if (current == NULL)
	{
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
