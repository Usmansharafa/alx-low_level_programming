#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * @n: Number of diagonals to draw
 */
void print_diagonal(int n)
{
	int i, count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			if (count > 0)
			{
				i = 0;

				while (i < count)
				{
					_putchar(' ');
					i++;
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
