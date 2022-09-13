#include "main.h"

/**
 * print_times_table - Prints n times table
 *
 * @n: number of time tables
 */
void print_times_table(int n)
{
	int product, multiplier, count;

	if (n <= 15 && n >= 0)
	{
		for (count = 0; count <= n; count++)
		{
			_putchar(48);
			for (multiplier = 1; multiplier <= n; multiplier++)
			{
				_putchar(',');
				_putchar(' ');
				product = count * multiplier;

				if (product < 10)
					_putchar(' ');
				if (product < 100)
					_putchar(' ');
				if (product > 99)
				{
					_putchar((product / 100) + 48);
					_putchar((product / 10) % 10 + 48);
				}
				else if (product > 9 && product < 100)
					_putchar((product / 10) % 10 + 48);
				_putchar(product % 10 + 48);
			}
			_putchar('\n');
		}
	}
}
