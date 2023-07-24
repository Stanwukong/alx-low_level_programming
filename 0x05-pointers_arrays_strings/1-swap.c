/*
 * File: 1-swap.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer to be swapped with b
 * @b: inetger to be swapped with a
 *
 */

void swap_int(int *a, int *b)
{
	int c; /* A placeholder */

	c = *a;
	*a = *b;
	*b = c;
}
