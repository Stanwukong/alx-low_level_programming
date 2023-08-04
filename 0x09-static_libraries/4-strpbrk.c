/*
 * File: 4-strpbrk.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: The set of bytes to be searched for.
 *
 * Return: A pointer to the matched byte if a set is matched
 *	NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');
}
