#include "lists.h"

/**
 * sum_listint - Sums all the data (n) of a
 *		listint_t linked list
 * @head: First node of the linked list
 *
 * Return: Sum of all data (n), otherwise 0.
 */

int sum_listint(listint_t *head)
{
	int buffer = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
		buffer += head->n;
		head = head->next;
	}
	return (buffer);
}
