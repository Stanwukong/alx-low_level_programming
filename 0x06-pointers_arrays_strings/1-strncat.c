#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *	except that it will use at most n bytes from src and
 *	src does not need to be null-terminated if it contains n
 *	or more bytes.
 * @dest: String to be affected
 * @src: String to be appended to @src.
 * @n: maximum bytes to take from @src.
 *
 * Return: Pointer to @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, length = 0;

	for (index = 0; dest[index]; index++)
	{
		length++;
	}

	for (index = 0; src[index]; index++)
	{
		if (index >= n)
		{
			break;
		}
		dest[length] = src[index];
		length++;
	}

	return (dest);
}
