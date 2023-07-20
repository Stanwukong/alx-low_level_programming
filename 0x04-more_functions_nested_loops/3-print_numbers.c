/*
 * File: 3-print_numbers.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to
 *		9, followed by a new line.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	/* Variable declaration */
	int n;

	/* Prints n as it increases */
	for (n = 0; n < 10; n++)
	{
		_putchar((n % 10) + '0');
	}

	_putchar('\n');
}
