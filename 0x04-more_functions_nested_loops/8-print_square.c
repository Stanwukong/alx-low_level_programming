/*
 * File: 8-print_square.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: size of the square
 *
 */

void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			if (height == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
