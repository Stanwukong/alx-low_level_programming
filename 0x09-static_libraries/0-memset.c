/*
 * File: 0-memset.c
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Pointer to memory area to be filled with the constant
 *	byte
 * @b: The constsnt byte value used to fill the array.
 * @n: The number of bytes to be filled.
 *
 * Return: Pointer to filled memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
		ptr++;
	}

	return (s);
}
