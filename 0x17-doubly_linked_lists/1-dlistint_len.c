#include "lists.h"

/**
 * dlistint_len - Returns the number of
 *		elements in a linked list
 * @h: Pointer to head of the linked list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
