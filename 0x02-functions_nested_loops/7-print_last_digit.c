#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: number to print last digit of
 *
 * Return: Last digit of param n
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	_putchar (digit + 48);
	return (digit);
}
