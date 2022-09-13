#include "main.h"

/**
 * print_to_98 - prints all numbers up to 98 from n
 *
 * @n: Starting point of count
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
		printf("%i\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		printf("%i\n");
	}
}
