/*
 * File: 100-times_table.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *			starting with 0.
 *
 * @n: The value of the table to be printed.
 */

void print_times_table(int n)
{
	int parent, child, result;

	if (n >= 0 && n <= 15)
	{
		for (parent = 0; parent <= n; parent++)
		{
			_putchar('0');

			for (child = 1; child <= n; child++)
			{
				_putchar(',');
				_putchar(' ');

				result = parent * child;

				if (result <= 99)
				{
					_putchar(' ');
				}
				if (result <= 9)
				{
					_putchar(' ');
				}
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
