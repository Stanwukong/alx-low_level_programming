/*
 * File: 1-args.c
 *
 * Author: Stanley O. Ajanaku
 */

#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Number of arguments passed into it.
 * @argv: Array of strings containging arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%i\n", argc - 1);
	return (0);
}
