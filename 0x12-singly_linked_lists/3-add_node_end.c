#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A pointer pointing to a pointer to the first node.
 * @str: The string variable to be stored in the newNode
 *
 * Return: On success -> Te address of the new element
 *	On fail -> NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *newStr;
	list_t newNode;
	list_t lastNode;

	newNode = malloc(sizeof(list_t));
	if (newNode ==	NULL)
	{
		return (NULL);
	}

	newStr = strdup(str);
	if (newStr == NULL)
	{
		free(newNode);
		exit(98);
	}

	len = strlen(newStr);
	newNode->str = newStr;
	newNode->len = len;
	newNode->next = NULL;

	if (*head != NULL)
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		else
		{
		lastNode->next = newNode;
		}
	}
	else
	{
		*head = newNode;
	}
	return (*head);
}
