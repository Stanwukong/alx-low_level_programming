/*
 * File: 4-pow_recursion.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 *_pow_recursion - Finds the value of x raised to
 *	the power of y.
 * @x: The number to be raised.
 * @y: The magnitude of raising
 *
 * Return: The value of x raised to y.
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	res *= _pow_recursion(x, y - 1);

	return (res);
}
