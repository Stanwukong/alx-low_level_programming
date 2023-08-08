/*
 * File: 3-alloc_grid.c
 *
 * Author: Stanley O. Ajanaku
 */

#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 *		array of integers.
 * @width: no of elements per subarray
 * @height: Number of array elements
 *
 * Return: If successful a pointer to the 2d array,
 *	otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **superarr;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	superarr = (char *)malloc(height * sizeof(int))

	if (superarr == NULL)
	{
		return (NULL);
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		superarr[height_index] = (int *)malloc(width * sizeof(int));

		if (superarr[height_index] == NULL)
		{
			while (height_index >= 0)
			{
				free(superarr[height_index])
				height_index--;
			}
			free(superarr);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
		{
			superarr[height_index][width_index] = 0;
		}
	}

	return (superarr);
}
