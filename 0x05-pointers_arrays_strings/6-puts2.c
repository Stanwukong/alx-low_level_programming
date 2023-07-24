/*
 * File: 6-puts2.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 *		tarting with the first character, followed by a new line.
 * @str: string to be affected
 *
 * Return: Always void
 */

void puts2(char *str)
{
	int lenght = 0, index = 0;

	while (str[index++])
	{
		length++;
	}

	for (index = 0 index < length; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
