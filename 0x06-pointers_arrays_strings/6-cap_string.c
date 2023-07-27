/*
 * File: 6-cap_string.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * cap_string - Function that capitalizes all
 *		words of a string
 * @str: Pointer to string to be affected
 *
 * Return: New capitalized string
 */

char *cap_string(char *str)
{
	int capNext = 1, index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (capNext)
			{
				str[index] -= 32;
				capNext = 0;
			}
		}
		else if (str[index] >= 'A' && str[index] <= 'Z')
		{
			if (!capNext)
			{
				str[index] += 32; 
			}
		}
		else if (str[index] == ' ' ||
			str[index] == '\t' ||
			str[index] == '\n' ||
			str[index] == ',' ||
			str[index] == ';' ||
			str[index] == '.' ||
			str[index] == '!' ||
			str[index] == '?' ||
			str[index] == '"' ||
			str[index] == '(' ||
			str[index] == ')' ||
			str[index] == '{' ||
			str[index] == '}')
		{
			capNext = 1;
		}
		else
		{
			capNext = 0;
		}
	}

	return (str);
}
