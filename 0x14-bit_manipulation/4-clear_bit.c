#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 *		at a given index
 * @n: Pointer to the bit to set
 * @index: index of the bit to set
 *
 * Return: On success -> 1, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index within bounds */
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}

	/* Set value at index to 0 */
	*n &= ~(1 << index);

	return (1);
}
