#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: Pointer to the list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int elem = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}

		elem++;
		h = h->next;
	}

	return (elem);
}
