#!/bin/bash
#include <stdlib.h>

#include <time.h>

/**
 * Main - Entry point
 *
 * Return: Successful
 */


int main(void)

{
	int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
			if (n > 5);
				printf("%d is greater than 5\n", n);
			if (n == 0);
				printf("%d is 0\n", n);
			if (n < 6, n != 0)
				printf("%d is less than 6 and not 0\n", n);
	return (0);

}

Footer

© 2022 GitHub, Inc.

Footer navigation

Terms

Privacy
