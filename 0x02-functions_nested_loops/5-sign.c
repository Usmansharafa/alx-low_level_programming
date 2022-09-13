#include "main.h"

/**
 * print_sign - Check whether a number is positive, negative or zero
 *
 * @n: number to be checked
 *
 * Return: 1 (if number is positive), 0 (if number is zero)
 * or -1 (if number is negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
