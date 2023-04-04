#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list by setting the head to null
 * @head: Pointer to the first element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if ((*head)->next != NULL)
		temp = (*head)->next;
	else
	{
		free(*head);
		*head = NULL;
		return;
	}
	if (*head)
	{
		free_listint2(&temp);
		free(*head);
	}
	*head = NULL;
}
