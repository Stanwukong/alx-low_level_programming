/*
 * File: 0-whatsmyname.c
 *
 * Author: Stanley O. Ajanaku
 */

#include <stdio.h>

/**
 * main - Prints its name.
 * @argc: Number of arguments of the program.
 * @argv: Array of strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
