#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 * Return: head node's data, otherwise 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	value = temp->n;
	*head = (*head)->next;

	free(temp);

	return (value);
}
