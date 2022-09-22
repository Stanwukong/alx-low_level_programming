#include "main.h"

/**
 * getString - gets length of string
 *
 * @str - string
 *
 * Return: length of string
 */
int getStringLength(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}
