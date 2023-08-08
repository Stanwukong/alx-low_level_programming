/*
 * File: 0-create_array.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and
 *	initializes it with a specific char.
 * @size: Size of the array.
 * @c: Character to be initialized into the array
 *
 * Return: If successful, a pointer to the array, otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array =  (char *)malloc(size * sizeof(char));

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
}
