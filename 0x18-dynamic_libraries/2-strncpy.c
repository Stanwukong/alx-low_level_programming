/*
 * File: 2-strncpy.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: pointer to destination array
 * @src: pointer to array to be copied to @dest
 * @n: number of bytes to be copied from @src to @dest
 *
 * Return: pointer to affected @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
