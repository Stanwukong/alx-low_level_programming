/*
 * File: 2-args.c
 *
 * Author: Stanley O. Ajanaku
 */

#include <stdio.h>

/**
 * main - Prints all arguments it recieves.
 * @argc: Number of arguments given to program
 * @argv: Array of strings containing the arguments
 * of the program.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int counter = 0;

	do
	{
		printf("%s\n", argv[counter]);
		counter++;
	}
	while (counter < argc);

	return (0);
}
