/*
 * File: 5-rev_string.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * rev_string- function that reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char sav;

	while (s[i++])
	{
		len++;
	}

	for (i = len - 1; i >= len / 2; i--)
	{
		sav = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = sav;
	}
}
