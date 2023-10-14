#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 *		of a list
 * @head: Pointer to pointer to head of the list
 * @n: Data to be attached to the new node
 *
 * Return: The address of the new element, otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (newNode);
}
