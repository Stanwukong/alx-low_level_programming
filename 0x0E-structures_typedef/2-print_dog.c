#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: The dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name)
	{
		printf("%s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}

	if (d->age)
	{
		printf("%f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}

	if (d->owner)
	{
		printf("%s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
