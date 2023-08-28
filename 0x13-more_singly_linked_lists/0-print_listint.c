#include "lists.h"

/**
 * print_listint - prints all the elements of a list_int list.
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int numElem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numElem++;
	}

	return (numElem);
}
