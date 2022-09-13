#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of even valued terms of a
 * Fibonacci sequence
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	unsigned long prev, next, sum;
	float total;

	prev = 1;
	next = 2;

	while (1)
	{
		sum = prev + next;

		if (sum > 4000000)
			break;

		if (sum % 2 == 0)
			total += sum;

		prev = next;
		next = sum;
	}

	printf("%.0f\n", total);
	return (0);
}
