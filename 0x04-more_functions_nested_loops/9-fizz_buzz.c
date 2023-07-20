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

	for (counter = 1; counter <= 100; counter++)
	{
		if ((counter % 5) == 0 && (counter % 3) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((counter % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((counter % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", counter);
		}
		if (counter == 100)
		{
			continue;
		}
		printf(" ");
	}

	printf("\n");

	return (0);
}
