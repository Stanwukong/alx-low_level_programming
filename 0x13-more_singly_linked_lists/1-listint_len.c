#include "lists.h"

/**
 * listint_len - Returns total of elements in a linked listint_t list
 * @h: Pointer to the first node of the linked list
 *
 * Return: Total number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int num;

	num = 0;
	while (h)
	{
		num++;
		h = h->next;	
	}

	return (num);
}
