#include "main.h"

/**
 * alloc_grid - Returns pointer to a two dimensional array of
 * integers
 * @width: Number of columns in the array
 * @height: Number of rows in the array
 * Return: Pointer to a two dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **new;
	int i, j;

	if (width < 0 || height < 0)
		return ('\0');
	new = (int **)malloc(height * sizeof(int));
	if (new == NULL)
		return ('\0');
	for (i = 0; i < height; ++i)
		new[i] = (int *)malloc(width * sizeof(int));
	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
			new[i][j] = 0;
	}

	return (new);
}
