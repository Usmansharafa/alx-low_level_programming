#include "search_algos.h"

int min(int a, int b);
int binsearch(int *arr, int high, int low, int x);
void printarr(int *arr, int low, int high);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: Pointer to array of integers to be searched
 * @size: Size of array to be searched
 * @value: Value to be found in array of integers
 * Return: The index of the first occurrence of the value if found else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, binlow, binhigh;

	if (!array || !size)
		return (-1);
	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	binlow = bound / 2;
	binhigh = min(bound + 1, (int)size) - 1;
	printf("Value found between indexes [%d] and [%d]\n", binlow, binhigh);
	return (binsearch(array, binhigh, binlow, value));
}

/**
 * min - Finds the minimum of two values
 * @a: First number
 * @b: Second number
 * Return: The smaller of a and b
 */
int min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * binsearch - This function holds the iterative logic for binary_search
 * @arr: Array of integers to search
 * @high: Highest index number of array being searched
 * @low: Lowest index number of array being searched
 * @x: Value to search for
 * Return: Index of x if found, else -1
 */
int binsearch(int *arr, int high, int low, int x)
{
	int mid = (low + high) / 2;

	while (low < high)
	{
		printarr(arr, low, high);
		mid = (low + high) / 2;
		if (arr[mid] < x)
			low = mid + 1;
		else if (arr[mid] >= x)
			high = mid - 1;
		else
			return (mid);
	}
	if (arr[low] == x)
	{
		printf("Searching in array: %d\n", arr[low]);
		return (low);
	}
	else
	{
		printf("Searching in array: %d\n", arr[high]);
		return (-1);
	}
}

/**
 * printarr - Helper function that outputs the array being searched everytime
 * it changes
 * @arr: Array being searched
 * @low: Lowest index of array being searched
 * @high: Highest index of array being searched
 */
void printarr(int *arr, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", arr[i]);
		if (high - i == 0)
			continue;
		printf(", ");
	}
	printf("\n");
}
