/*
 * File: 3-strcmp.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: Pointer to first string to be compared against s2
 * @s2: Pointer to second string to be compared against s1
 *
 * Return: If s1 < s2,
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
