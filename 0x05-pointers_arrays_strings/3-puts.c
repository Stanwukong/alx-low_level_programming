/*
 * File: 3-puts.c
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: string to be printed to stdout
 *
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
