#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: smallest element of the array
 * @max: largest element of the array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *new;
	int i;

	if (min > max)
		return (NULL);
	new = malloc((max - min + 1) * sizeof(int));
	if (new == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		new[i] = min;
		min++;
	}

	return (new);
}
