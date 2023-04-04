#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint -  sums of all the data(n) of a listint_t linked list
 * @head: pointer to the head element of the list
 * Return:  sum of all the data in the list,otherwise 0
 * if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
