#include "main.h"

/**
 * set_bit - sets value of a bit to 1 
 *		at a given index
 * @n: The bit
 * @index: index of the bit to set
 *
 * Return: On success -> 1, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is out of bounds */
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}

	/* set value at index */
	*n |= (1 << index);

	return (1);
}
