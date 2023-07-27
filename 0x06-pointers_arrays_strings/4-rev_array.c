/*
 * File: 4-rev_array.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * reverse_array - function that changes all lowercase letters
 *		of a string to uppercase.
 * @a: Pointer to array to be affected
 * @n: Number of elements of the array to be affected.
 *
 * Return: Always void.
 */

void reverse_array(int *a, int n)
{
	int index, hold;

	for (index = 0; index < n / 2; index++)
	{
		hold = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = hold;
	}
}
