/*
 * File: 2-strlen_recursion.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _strlen_recursion - Calculates length of a string
 * @s: Pointer to string to be checked.
 *
 * Return: Number of characters in the string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
