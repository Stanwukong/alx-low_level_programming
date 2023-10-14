#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at
 *			given position.
 * @h: Pointer to pointer to head of the linked list.
 * @idx: Index of the list to add new node.
 * @n: Data to be added to the new node
 *
 * Return: Address of the new node, otherwise NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;

	temp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx != 0)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}

		idx--;
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = temp->next;
	newNode->prev = temp;

	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
