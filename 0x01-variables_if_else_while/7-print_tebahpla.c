/*
 * File: 7-print_tebahpla.c
 *
 * Author: Stanley O. Ajanaku
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the lowercase alphabet in reverse,
 *	followed by a new line using only the putchar
 *	function
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	/* Loop through z to a */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
