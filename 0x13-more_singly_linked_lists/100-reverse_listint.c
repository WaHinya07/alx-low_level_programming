#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - Reverses a listint_t list
 * @head: A pointer to the address of the head of the list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);

	previous = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = ahead;
	}

	(*head)->next = previous;

	return (*head);
}
