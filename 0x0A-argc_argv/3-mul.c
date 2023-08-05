/*
 * File: 3-mul.c
 *
 * Author: Stanley O. Ajanaku
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 * @argc: Number of arguments given to program.
 * @argv: Array of strings containing the arguments.
 *
 * Return: If program receives two integers 0, else 1.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%i\n", result);

	return (0);
}
