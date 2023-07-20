/*
 * File: 4-print_most_numbers.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 *		except 2 and 4
 */

void print_most_numbers(void)
{
	/* Variable declaration */
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		else
		{
			_putchar((num % 10) + '0');
		}
	}

	_putchar('\n');
}
