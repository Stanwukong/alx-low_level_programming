#include "main.h"

/**
 * get_endianness - Checks the endianness
 * 
 * Return: 0 if big endian, otherwise 1 
 */

int get_endianness(void)
{
	int n = 1;
	char *endian;

	n = 1;
	endian = (char *)&n;

	if (*endian == 1)
	{
		return (1);
	}

	return (0);
}
