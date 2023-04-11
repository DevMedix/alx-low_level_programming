#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by my alloc_grid function.
 * @grid: 2D array
 * @height: row of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);

		i++;
	}
	free(grid);
}
