#include "main.h"

/**
 * print_number - Prints out any integer number
 *
 * @n: number to be printed out
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	num = n;
	if ((num / 10) > 0)
		print_number(num / 10);
	putchar((n % 10) + '0');
}
