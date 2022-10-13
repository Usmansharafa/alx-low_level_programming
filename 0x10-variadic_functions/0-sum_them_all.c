#include "variadic_functions.h"

/**
 * sum_them_all - Gets the sum of n number of
 * integer arguments
 * @n: Number of arguments to be summed
 * @...: n number of integer arguments
 * Return: Sum of n integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
