#include "lists.h"

size_t looped_listint(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint - prints the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t
 * Return: 0, if linked list is not looped
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_number(listint_t *head)
{
	listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a looped listint_t list safely
 * @h: A pointer to the address of the head of a linked list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, idx;

	nodes = looped_listint_number(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
