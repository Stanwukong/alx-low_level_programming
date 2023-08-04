/*
 * File: 2-strlen.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string to be evaluated
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
