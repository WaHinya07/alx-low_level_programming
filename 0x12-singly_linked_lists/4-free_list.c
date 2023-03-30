#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees previously allocated memory for a list
 * @head: pointer to the first element of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
