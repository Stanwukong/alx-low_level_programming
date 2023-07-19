/*
 * File: 2-print_alphabet_x10.c
 * Author: Stanley O. Ajanaku
 */
#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	int counter;
	char letter;

	for (counter = 0; counter < 10; counter++)
	{
		do
		{
			_putchar(letter);
			letter++;
		}
		while(letter >= 'a' && letter <= 'z');
	}
}
