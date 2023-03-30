#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds a new node to a linked list
 * @head: Pointer to the first element of the list
 * @str: String in the linked list
 * Return: address of the new element
 * else, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(new_node);
	}
	for (len = 0; str[len];)
		len++;

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
