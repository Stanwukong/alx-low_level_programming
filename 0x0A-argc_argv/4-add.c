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
	int num, sum = 0, digit;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%i\n", sum);

	return (0);
}
