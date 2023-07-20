/*
 * File: 10-print_triangle.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int row, space, hash;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			space = size - (size - row);

			while (space < size)
			{
				_putchar(' ');
				space++;
			}

			for (hash = 0; hash < row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
