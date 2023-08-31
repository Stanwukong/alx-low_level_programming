#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the address of the first node
 * @idx: Index of the list where new node will be added
 * @n: Value to be given to the new node
 *
 * Return: Address of the new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;

	while (*head)
	{
		if (idx == 0)
		{
			temp = *head;
			*head = new_node;
			(*head)->next = temp;
			return (*head);
		}
	
		if (count == (idx - 1))
		{
			temp = (*head)->next;
			(*head)->next = new_node;
			new_node->next = temp;
			break;
		}
		
		*head = (*head)->next;
		count++;
	}
	return (new_node);
}
