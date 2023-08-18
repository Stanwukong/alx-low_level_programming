#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line. 
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function
 * @...: Variable number of consecutive arguments
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	va_list args;
	char *buffer;

	va_start(args, n);

	for (idx = 0; idx < n; idx++)
	{
		buffer = va_arg(args, char *);
	
		if (buffer != NULL)
		{
			printf("%s", buffer);

			if (separator != NULL && idx != (n - 1))
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("(nil)");
		}
	}
	va_end(args);

	printf("\n");
}
