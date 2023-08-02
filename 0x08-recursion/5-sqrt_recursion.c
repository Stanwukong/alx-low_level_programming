/*
 * File: 5-sqrt_recursion.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _sqrt_recursion - Finds the natural square
 *	root of a number.
 * @n: The number to be checked
 *
 * Return: A square root, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	int guess;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (n);
	}
	else
	{
		guess = _sqrt_recursion(n - 1);

		if (guess * guess <= n && (guess + 1) * (guess + 1) > n)
		{
			return (guess);
		}
		else
		{
			guess++;
			return (guess);
		}
	}
}
