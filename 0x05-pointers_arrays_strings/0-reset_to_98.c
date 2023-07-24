/*
 * File: 0-reset_to_98.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * reset_to_98 -  takes a pointer to an int as parameter and
 *		updates the value it points to to 98.
 *
 * @n: value to be affected
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	/* By derefrencing and assigning a new value */
	*n = 98;
}
