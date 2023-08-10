#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Amount of bytes to allocated
 *
 * Return: On Success: Pointer to allocated memory
 *	On Fail: Process termination with status value of
 *	98
 */

void *malloc_checked(unsigned int b)
{
	/* Declare pointer to hold address */
	void *ptr;

	/* Allocate size */
	ptr = malloc(b);

	/* Check malloc return */
	if (ptr == NULL)
		exit(98);

	/* Return pointer*/
	return (ptr);
}
