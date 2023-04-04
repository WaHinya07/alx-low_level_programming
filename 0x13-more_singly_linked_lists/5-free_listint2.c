#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list by setting the head to null
 * @head: Pointer to the first element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *current = *head;

	if (current == NULL)
	{
		return;
	}
	while (current)
	{
		next = current->next;
		free(current);

		current = next;
	}
	*head = NULL;
}
