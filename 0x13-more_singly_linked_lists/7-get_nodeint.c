#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked
 *		list.
 * @head: First node of the linked list.
 * @index: Index of the node to be returned
 *
 * Return: nth node of the linked list, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head)
	{
		if (count == index)
		{
			temp = head;
			break;
		}
		head = head->next;
		count++;
	}

	return (temp);
}
