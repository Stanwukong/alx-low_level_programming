#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: pointer containing pointer to the head of the linked list
 * @n: Value to be given to the new node
 *
 * Return: on success -> address of new node, otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	int value = n;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->next = *head;

	*head = newNode;
	
	return (newNode);
}
