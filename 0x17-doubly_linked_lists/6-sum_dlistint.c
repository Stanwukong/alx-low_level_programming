#include "lists.h"

/**
 * sum_dlistint - Gets the sum of all data in a linked list.
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all data in the list, otherwise 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
