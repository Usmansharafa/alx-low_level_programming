#include "main.h"

/**
 * _sqrt_recursion - Gets the square root of n
 *
 * @n: Number whose square root is to be found
 * Return: Square root of n or -1 if there is no natural
 * square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	return (_sqrt(0, n));
}

/**
 * _sqrt - gets the square root of x
 *
 * @n: guess to check as possible root of x
 * @x: number whose square root is to be found
 * Return: Square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
