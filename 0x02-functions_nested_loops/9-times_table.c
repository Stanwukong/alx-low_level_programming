/*
 * File: 9-times_table.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * times_table - Prints the 9 times table
 *		starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int parent, child, result;

	for (parent = 0; parent < 10; parent++)
	{
		_putchar('0');

		for (child = 1; child < 10; child++)
		{
			_putchar(',');
			_putchar(' ');

			result = parent * child;

			if (result < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
