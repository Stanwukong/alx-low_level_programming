/*
 * File: 7-print_diagonal.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 *
 * @n: number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	int row, dots;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (dots = 0; dots < row; dots++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (row == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
