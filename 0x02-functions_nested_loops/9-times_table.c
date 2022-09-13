#include "main.h"

/**
 * times_table - prints the time table from 0 to 9
 *
 */
void times_table(void)
{
	int i, j, num, first, second;

	for (i = 0; i < 10; i++)
	{
		j = 0;

		while (j < 10)
		{
			num = i * j;

			if (num >= 0 && num < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(num + 48);
				if (j != 9)
					_putchar(',');
			}
			else if (num >= 10 && num < 100)
			{
				_putchar(' ');
				first = num / 10;
				second = num % 10;
				_putchar(first + 48);
				_putchar(second + 48);
				if (j != 9)
					_putchar(',');
			}
			j++;
		}
		_putchar('\n');
	}
}
