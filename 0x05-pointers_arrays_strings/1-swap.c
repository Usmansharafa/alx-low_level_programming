#include "main.h"

/**
 * swap_int - Swaps the values of two integer variables
 *
 * @a: first integer
 *
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

