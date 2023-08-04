#include "main.h"

/**
 * _strcat - Contatenates two strings
 * @dest: Original string
 * @src: String to be appended to @dest
 *
 * Return: Pointer to destination @dest
 */

char *_strcat(char *dest, char *src)
{
	int index, dest_length;

	index = 0;
	dest_length = 0;

	while (dest[index++])
	{
		dest_length++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_length++] = src[index];
	}

	return (dest);
}
