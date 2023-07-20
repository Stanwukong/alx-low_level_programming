/*
 * File: 6-print_line.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times _ should be printed
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
