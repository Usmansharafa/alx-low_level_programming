#include "main.h"

/**
 * print_square - Prints a square
 *
 * @size: Size of the square
 */
void print_square(int size)
{
	int row, count;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			count = 0;

			while (count < size)
			{
				_putchar('#');
				count++;
			}
			_putchar('\n');
		}
	}
}
