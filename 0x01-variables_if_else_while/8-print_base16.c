/*
 * File: 8-print_base16.c
 *
 * Author: Stanley O. Ajanaku
 */

#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 *	in lowercase, using only putchar a
 *	maximum of three times.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;
	char letter;

	/* Loop through 0-9 */
	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
