/*
 * File: 5-string_toupper.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of
 *		a string to uppercase
 * @s: String to be affected.
 *
 * Return: Pointer to new string.
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (s[index])
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - 32;
		}

		index++;
	}

	return (s);
}
