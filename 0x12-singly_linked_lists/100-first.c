#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before main is executed
 */

void hare()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
