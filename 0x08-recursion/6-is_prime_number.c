#include "main.h"

/**
 * is_prime_number - Checks whether a number is prime or not
 * @n: Number to be checked
 * Return: 1 if prime or 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	return (is_prime(n - 1, n));
}

/**
 * is_prime - Checks whether a number is prime
 * @n: guess to check as possible divisor
 * @x: number to check if prime
 * Return: 1 if prime or 0 if not prime
 */
int is_prime(int n, int x)
{
	if (x % n == 0 && n == 1)
		return (1);
	else if (x % n == 0 && (x != n || n != 1))
		return (0);
	return (is_prime(n - 1, x));
}
