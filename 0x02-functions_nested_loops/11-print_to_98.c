/*
 * File: 11-print_to_98.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from
 *		n to 98, in order and separated by a comma, followed
 *		by a space.
 * @n: starting number.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		do
		{
		printf("%d, ", n--)
		}
		while (n > 98);

		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}

		printf("%d\n", n);
	}
}
