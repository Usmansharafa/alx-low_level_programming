#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the Jump Search Algorithm
 * @array: Pointer to array of integers to be searched
 * @size: Size of array to be searched
 * @value: Value to be searched for in the array
 * Return: Index of the first occurence of the value if found, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i, j, step, prev;

	if (!array || !size)
		return (-1);
	i = prev = j = 0;
	step = sqrt((int)size);
	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		j++;
		prev = i;
		i = j * step;
	} while (i < (int)size && array[i] < value);
	printf("Value found between indexes [%d] and [%d]\n", prev, i);
	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);

}
