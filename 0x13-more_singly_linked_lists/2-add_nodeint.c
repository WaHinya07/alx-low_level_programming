#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginningof a linked list
 * @head: Pointer to a pointer to the head node of the list
 * @n: the value to be stored in the new node
 * Return: address of the new node else null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeint;

	if (head == NULL)
	{
		return (NULL);
	}

	new_nodeint = malloc(sizeof(listint_t));

	if (new_nodeint == NULL)
	{
		return (NULL);
	}
	new_nodeint->n = n;
	new_nodeint->next = *head;
	*head = new_nodeint;
	return (new_nodeint);
}
