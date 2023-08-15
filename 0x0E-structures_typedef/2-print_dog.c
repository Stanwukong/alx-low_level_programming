#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: The dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit();
	}

	if (d->name)
	{
		printf("%s/n", d->name);
	}
	else
	{
		printf("Name: (nil)");
	}

	if (d->age)
	{
		printf("%i/n", d->age);
	}
	else
	{
		printf("Age: (nil)");
	}

	if (d->owner)
	{
		printf("%s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)");
	}
}
