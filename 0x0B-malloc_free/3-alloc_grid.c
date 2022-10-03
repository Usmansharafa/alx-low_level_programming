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

	if (width <= 0 || height <= 0)
		return (NULL);
	new = (int **) malloc(height * sizeof(int));
	if (new != NULL)
	{
		for (i = 0; i < height; i++)
		{
			new[i] = (int *) malloc(width * sizeof(int));
			if (new[i] != NULL)
			{
				for (j = 0; j < width; j++)
					new[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(new[i]);
					i--;
				}
				free(new);
				return (NULL);
			}
		}
		return (new);
	}
	return (NULL);
}
