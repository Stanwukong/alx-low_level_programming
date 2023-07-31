/*
 * File: 1-memcpy.c
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _memcpy - Copy n bytes from the src to
 *	dest memory
 * @dest: Pointer to destination memory where
 *	data will be copied to.
 * @src: Pointer to the source memory where
 *	data will be copied from.
 * @n: Number of bytes to be copied from the
 *	source memory area to the destination memory area
 *
 * Return: Pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest, *p_src = src;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		p_src[index] = p_dest[index];
		p_dest++;
		p_src++;
	}
	return (dest);
}
