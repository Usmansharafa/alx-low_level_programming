#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int count;
	unsigned long prev, next, sum;

	prev = 1;
	next = 2;
	sum = 3;

	for (count = 0; count < 49; count++)
	{
		if (count == 0)
		{
			printf("%lu, ", prev);
		}
		else if (count == 1)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu, ", sum);
			prev = next;
			next = sum;
			sum = sum + prev;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
