#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees previously allocated memory
 * @grid: input 2D array of integers to free
 * @height: height of the grid
 * Return: void
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
