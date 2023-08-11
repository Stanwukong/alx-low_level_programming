#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concantenates two strings.
 * @s1: 1st string to be affected.
 * @s2: 2nd string to be affected.
 *
 * Return: on success - Pointer to new string
 *	on fail - NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int index, length = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Get strings length */
	for (index = 0; s1[index]; index++)
		length++;

	newstr = malloc(sizeof(char) * (length + 1));

	if (newstr == NULL)
		return (NULL);

	length = 0;

	for (index = 0; s1[index]; index++)
		newstr[length++] = s1[index];

	for (index = 0; s2[index]; index++)
		if (index < n)
			newstr[length++] = s2[index];

	newstr[length++] = '\0';

	return (newstr);
}
