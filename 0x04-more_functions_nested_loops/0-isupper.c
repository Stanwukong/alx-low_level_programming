/*
* File: 0-isupper.c
*
* Author: Stanley O. Ajanaku
*/

#include "main.h"

/**
 * main - Checks for uppercase character
 * @c: Character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
