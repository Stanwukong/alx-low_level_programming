#include "lists.h"

/**
 * add_nodeint_end - Adds new node at the end of a list_t list
 * @head: Pointer pointing to the address of the first node.
 * @n: Value to be assigned to the node
 *
 * Return: Address of new node, otherwise NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node;
	int value = n;

	/* Assign memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Assign values to new node */
	new_node->n = value;
	new_node->next = NULL;

	/* Add node to linkedlist */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);

}
