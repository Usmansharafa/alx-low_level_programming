#include "main.h"

/**
 * factorial - Gets the factorial of a number
 * @n: Number whose factorial is to be found
 * Return: Factorial of n or -1 if n is less than zero
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
