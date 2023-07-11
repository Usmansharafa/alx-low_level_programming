#include "search_algos.h"

int binsearch(int *arr, int high, int low, int mid, int x);
void printarr(int *arr, int low, int high);

/**
 * binary_search - This function searches for a value in a sorted array of
 * integers
 * @array: Array of integers to search
 * @size: Size of array
 * @value: Value to search for
 * Return: Index of value if found, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, index;

	low = 0;
	high = (int)size - 1;
	mid = (low + high) / 2;
	index = binsearch(array, high, low, mid, value);
	return (index);
}

/**
 * binsearch - This function holds the iterative logic for binary_search
 * @arr: Array of integers to search
 * @high: Highest index number of array being searched
 * @low: Lowest index number of array being searched
 * @mid: Probe index to carry out divide and conquer
 * @x: Value to search for
 * Return: Index of x if found, else -1
 */
int binsearch(int *arr, int high, int low, int mid, int x)
{
	while (low < high)
	{
		printarr(arr, low, high);
		mid = (low + high) / 2;
		if (arr[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
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
