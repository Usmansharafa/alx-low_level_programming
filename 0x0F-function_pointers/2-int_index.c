#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array to search
 * @size: Number of elements in the array to be searched
 * @cmp: Pointer to the function used for comparing
 * Return: index of the first element for which the cmp
 * function does not return 0 or -1 if no element matches
 * or size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
