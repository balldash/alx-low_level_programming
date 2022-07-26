#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2D array of ints
 * previously created by your malloc_grid function
 * @grid: an input 2D array of integers to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
