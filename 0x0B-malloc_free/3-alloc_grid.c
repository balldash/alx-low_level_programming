#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returs a pointer to a
 * 2 dimensional array of integers
 * @width: an input integer at number of columns
 * @height: an input integer at number of rows
 * Return: a pointer to a 2D array, NULL of failure
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; i < height; i++)
				free(array[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
