/*
 * File: 2-strchr.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to be tested.
 * @c: Character to be located
 *
 * Return: pointer to the first occurrence of the
 *	character c in the string s, or NULL if the
 *	character is not found
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	do
	{
		if (s[index] == c)
		{
			return (s + index);
		}

		index++;
	}
	while (s[index] != '\0');

	return ('\0');
}
