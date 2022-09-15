#include "main.h"

/**
 * more_numbers - Prints numbers 0 - 14 10 times
 */
void more_numbers(void)
{
	int i, j, count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			j = i;

			if (j > 9)
			{
				putchar(49);
				j = j % 10;
			}
			putchar(j + 48);
		}
	putchar('\n');
	}
}
