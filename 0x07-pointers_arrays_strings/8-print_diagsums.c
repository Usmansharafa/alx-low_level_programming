#include "main.h"

/**
 * print_diagsums - Prints the sum of the diagonals of a square
 * matrix
 *
 * @a: array to check diagonals
 *
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, left_sum, right_sum;

	left_sum = 0;
	right_sum = 0;
	for (i = 0; i < size; i++)
	{
		left_sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		right_sum += a[i];
		a -= size;
	}

	printf("%d, %d\n", left_sum, right_sum);
}
