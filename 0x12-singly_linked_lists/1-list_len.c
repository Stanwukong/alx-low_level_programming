#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: Pointer to the linked list
 *
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int len;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
