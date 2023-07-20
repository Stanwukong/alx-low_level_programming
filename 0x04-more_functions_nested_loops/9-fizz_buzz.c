/*
 * File: 9-fizz_buzz.c
 *
 * Author: Stanley O. Ajanaku
 */

#include <stdio.h>

/**
 * main - Prints numbers from 1- 100, but for multiples of 3
 *	print instead of the number and for multiples of five print
 *	Buzz and prints FizzBuzz for multiples of both 3 and 5.
 *
 * Return: Always 0.
 */

int main(void)
{
	int counter;

	for (counter = 1; counter < 101; counter++)
	{
		if ((counter % 3 == 0) && (counter % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((counter % 5 == 0) && (counter % 3 != 0))
		{
			printf("Buzz ");
		}
		else if ((counter % 3 == 0) && (counter % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", counter);
		}
	}
	printf("\n");

	return (0);
}
