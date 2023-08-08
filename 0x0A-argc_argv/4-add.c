/*
 * File: 4-add.c
 *
 * Author: Stanely O. Ajanaku
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments passed
 * @argv: Array of arguments
 *
 * Return: Always 0. 1 if non-number encountered
 */

int main(int argc, char *argv[])
{
	int index, sum, result, digit;

	for (index = 1; index < argc; index++)
	{
		for (digit = 0; argv[index][digit]; digit++)
		{
			if (argv[index][digit] < '0' || argv[index][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[index]);
	}
	printf("%i\n");

	return (0);
}
