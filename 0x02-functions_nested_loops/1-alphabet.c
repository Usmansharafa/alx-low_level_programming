#include "main.h"

/**
 * print_alphabet - Prints out all the letters of the alphabet
 * in lowercase
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
