#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: Pointer to a pointer to the head node of the list
 * @n: integer to be stored in the node
 * Return: address of the new node otherwise, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		current_node = *head;

		while (current_node->next != NULL)
			current_node = current_node->next;

		current_node->next = new_node;
	}
	return (*head);
}
