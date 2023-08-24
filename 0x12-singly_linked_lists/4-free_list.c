#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list to be affected
 *
 */

void free_list(list_t *head)
{
	list_t *buffer;

	while (head)
	{
		buffer = head->next;
		free(head->str);
		free(head);
		head = buffer;
	}
}
