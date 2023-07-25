/*
 * File: 8-print_array.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 *		followed by a new line.
 * @a: integer to be printed
 * @n: number of times to print
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
		{
			continue;
		}
		printf(", ");
	}

	printf("\n");
}
