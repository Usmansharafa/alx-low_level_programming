#include "main.h"

/**
 * reverse_array - Reverses the order of an array
 *
 * @a: array to be reversed
 *
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i > n / 2; --i)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
