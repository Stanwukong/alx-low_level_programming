/*
 * File: 4-print_rev.c
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 */

void print_rev(char *s)
{
	int len = 0, i;

	/* Find length of string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print in reverse order */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
