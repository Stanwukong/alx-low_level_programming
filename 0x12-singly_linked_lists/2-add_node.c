#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of
 *		a list_t list
 * @head: A pointer pointing to a pointer to the head
 * @str: A string variable to be added to the new node
 *
 * Return: On success -> The address of the new element
 *	On fail -> NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *newNode;
	char *newStr = strdup(str);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	for (len = 0; newStr[len];)
	{
		len++;
	}

	if (newStr == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = newStr;
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
