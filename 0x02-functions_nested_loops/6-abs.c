/*
 * File: 6-abs.c
 * Author: Stanley O. Ajanaku
 */

#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to be computed.
 *
 * Return: the absolute value of the integer.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return n;
	}
	else
	{
		return (-n);
	}
}
