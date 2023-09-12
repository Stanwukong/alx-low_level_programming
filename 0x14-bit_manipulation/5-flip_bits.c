#include "main.h"

/**
 * flip_bits - calculates number of bits needed
 *		to get from one number to another
 * @n: The number.
 * @m: The target number.
 *
 * Return: The number of bits to flip to get from
 *		n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int count = 0;

	while (xor_res > 0)
	{
		count += xor_res & 1;
		xor_res >>= 1;
	}

	return (count);
}
