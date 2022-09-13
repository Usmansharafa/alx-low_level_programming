#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the sum of all natural numbers
 * that are multiples of 3 or 5
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i, count, sum;

	count = 10;
	i = 1;
	sum = 0;

	while (i < count)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%i\n", sum);
	return (0);
}
