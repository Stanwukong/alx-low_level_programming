/*
 * File: 6-is_prime_number.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * is_prime_number - Checks if input n is a prime number
 * @n: Number to be checked
 *
 * Return: 1 if prime number, otherwise 0.
 */

int is_prime_helper(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return is_prime_helper(n, divisor + 1);
}

int is_prime_number(int n)
{
	return is_prime_helper(n, 2);
}
