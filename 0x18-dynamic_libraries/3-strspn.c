/*
 * File: 3-strspn.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _strspn - Function that gets the length of a
 *	prefix substring.
 * @s: string to be affected
 * @accept: The prefix to be measured
 *
 * Return: The number of bytes in s which only consist
 *	of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int length = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				length++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (length);
			}
		}

		s++;
	}

	return (length);
}
