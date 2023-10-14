#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node, starting from 0.
 *
 * Return: Node at specified index, otherwise NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;

		index--;
	}

	return (head);
}
