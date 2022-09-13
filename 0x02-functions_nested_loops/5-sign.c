#include "main.h"
/*
 * show_sign - function to check for a sign of a number
 *
 * @c: is the int that will be used for the argument of the function
 * Return: 0
 */

int show_sign(int n)

{

if (n > 0)

{

_putchar('+');

return (1);

}

else if (n < 0)

{

_putchar('-');

return (-1);

}
else

{

_putchar('0');

return (0);

}

}
