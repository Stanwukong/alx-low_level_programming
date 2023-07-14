/*
 * File: 6-print_numberz.c
 *
 * Author: Stanley O. Ajanaku
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *		followed by a new line without using a variable of
 *		type char and using only putchar.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');

	return (0);
}
