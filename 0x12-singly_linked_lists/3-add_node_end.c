#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: Pointer to the first element in a list
 * @str: string to be added to the list
 * Return: the address of the new element
 * else, null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new_node, *end;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	duplicate = strdup(str);

	if (str == NULL)
	{
		free(new_node);
	}

	for (len = 0; str[len];)
		len++;
	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		end = *head;

		while (end->next != NULL)
			end = end->next;
		end->next = new_node;
	}
	return (*head);
}

