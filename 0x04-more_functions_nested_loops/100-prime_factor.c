/*
 * File: 100-prime_factor.c
 *
 * Author: Stanley O. Ajanaku
 */

#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 
 *		612852475143
 *
 */

int main (void)
{
	long num = 612852475143, factor = 2;

	while ((factor * factor) <= num)
	{
		if ((num % factor) == 0)
		{
			num /= factor;
			factor = 2;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", num);

	return (0);
}
