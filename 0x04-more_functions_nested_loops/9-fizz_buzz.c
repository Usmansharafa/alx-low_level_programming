#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints out numbers from 1 - 100 and replaces multiples of
 * 3 with Fizz, multiples of 5 with Buzz and multiples of both 3 and 5 with
 * FizzBuzz
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
