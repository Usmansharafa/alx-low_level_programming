#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: Pointer to array of integers to be searched
 * @size: Size of array pf integers
 * @value: Value to search for
 * Return: Index of the first occurrence of the value if found else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	double i;
	size_t pos;

	if (!array || !size)
		return (-1);
	low = 0;
	high = size - 1;

	while (size)
	{
		i = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + i);
		printf("Value checked array[%d]", (int)pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		printf(" = [%d]\n", array[pos]);
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			break;
	}
	return (-1);
}
