#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t
 *		linked list, and returns its data(n).
 * @head: Pointer to address of the first node
 *
 * Return: Head node data(n), otherwise 0
 */

int pop_listint(listint_t **head)
{
	int data;

	if (head == NULL)
	{
		return (0);
	}

	data = (*head)->n;

	if (!data)
	{
		return (0);
	}

	free(*head);

	return (data);
}
