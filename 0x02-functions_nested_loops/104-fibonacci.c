#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int count;
	unsigned long long prev, next, sum;

	prev = 1;
	next = 2;
	sum = 3;

	for (count = 0; count < 99; count++)
	{
		if (count == 0)
		{
			printf("%llu, ", prev);
		}
		else if (count == 1)
		{
			printf("%llu, ", next);
		}
		else
		{
			printf("%llu, ", sum);
			prev = next;
			next = sum;
			sum = sum + prev;
		}
	}
	printf("%llu\n", sum);
	return (0);
}
