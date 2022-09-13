#include "main.h"

/**
 * print_alphabet_x10 - Prints out all the letters of
 * the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int count, n;

	count = 0;

	while (count < 10)
	{
		for (n = 97; n < 123; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		count++;
	}
}
