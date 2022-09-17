#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times th e character \ should be printed
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
} else
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
_putchar ('');
}
_putchar('\n');
}
}
}
