#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 *
 * @a: Array containing integers
 *
 * @n: number of integers from the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; ++i)
	{
		printf("%i", a[i]);
		if (i + 1 == n)
		{
			printf("\n");
			continue;
		}
		printf(", ");
	}
}
