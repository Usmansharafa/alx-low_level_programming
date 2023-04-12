#include "search_algos.h"

/**
 * linear_search - This function searches for a value in an array of integers
 * using linear search algorithm
 * @array: Array of integers
 * @size: Size of array
 * @value: Value to search for
 * Return: Index of first occurrence of value if found, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%d]\n", index, array[index]);
		if (array[i] == value)
			return (index);
		index++;
	}
	return (-1);
}
