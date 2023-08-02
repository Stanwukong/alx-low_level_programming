/*
 * File: 1-print_rev_recursion.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to string to be printed.
 *
 * Return: Always void.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
