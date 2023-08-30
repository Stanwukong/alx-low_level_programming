#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: First node of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	/* Loops through the linked list */
	while (head)
	{
		/* Hold next node */
		temp = head->next;
		/* Frees current node */
		free(head);
		/* Make next node head node */
		head = temp;
	}
}
