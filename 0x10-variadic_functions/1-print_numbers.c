#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int idx;

	va_start(args, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%i", va_arg(args, int));
		if (idx != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
