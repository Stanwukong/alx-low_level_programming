/*
 * File: 5-more_numbers.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * more_numbers - Prints the numbers 0 to 14, 10 times
 *		followed by a new line.
 *
 */

void more_numbers(void)
{
	/* Variable declaration */
	int count, num;

	/* Prints content 10x */
	for (count = 0; count < 10; count++)
	{
		/* Prints 0 to 14 */
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
