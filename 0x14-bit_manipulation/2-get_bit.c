#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given
 *	index.
 * @n: integer to be converted to binary
 * @index: index of bit to be printed
 *
 * Return: Value of bit at index, otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is out of bounds */
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}

	/* Check bit at index */
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
