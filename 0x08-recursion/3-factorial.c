/*
 * File: 3-factorial.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * factorial - Calculates the factorial of
 *	given number
 * @n: Number to be checked
 *
 * Return: The factorial if > 0, otherwise -1
 */

int factorial(int n)
{
	int res = n;

	if (n <  0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	res *= factorial(n - 1);

	return (res);
}
