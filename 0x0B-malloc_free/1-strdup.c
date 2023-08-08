/*
 * File: 1-strdup.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates string and returns a pointer to
 *		a newly allocated space in memory.
 * @str: String to be duplicated.
 *
 * Return: If successful, pointer to new space, otherwise NULL
 */

char *_strdup(char *str)
{
	char *newstr;
	int index, length = 0;

	/* Check for str input */
	if (str == NULL)
	{
		return (NULL);
	}
	/* Find length of string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Allocate dynamic memory */
	newstr = (char *)malloc((length + 1) * sizeof(char));

	/* Catch fail in memory allocation */
	if (newstr == NULL)
	{
		return (NULL);
	}

	/* Initialize string into new memory */
	for (index = 0; index < length; index++)
	{
		newstr[index] = str[index];
	}

	newstr[length] = '\0';

	return (newstr);
}
