#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each array
 * element
 * @array: Array of integers
 * @size: Size of array
 * @action: Function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0)
		return;
	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
