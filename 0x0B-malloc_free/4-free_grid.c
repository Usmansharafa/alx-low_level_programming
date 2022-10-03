#include "main.h"

/**
 * free_grid - Frees dynamically allocated memory for a 2d array
 * @grid: 2d array to be freed
 * @width: Number of columns in grid
 * @height: NUmber of rows in grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
