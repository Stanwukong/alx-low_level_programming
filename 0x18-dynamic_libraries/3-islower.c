/*
 * File: 3-islower.c
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _islower - checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
