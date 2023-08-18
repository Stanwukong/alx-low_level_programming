#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Return the sum of all its parameters.
 * @n: First argument of the function
 * @...: Consecutive optional arguments
 *
 * Return: If n == 0, return 0. Otherwise the total sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int idx, sum;

	va_start(args, n);

	sum = 0;

	for (idx = 0; idx < n; idx++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
