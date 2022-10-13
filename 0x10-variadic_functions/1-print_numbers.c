#include "variadic_functions.h"

/**
 * print_numbers - Prints n numbers
 * @separator: Delimiter between each number
 * @n: Number of integers to print
 * @...: n number of integer arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (n - i > 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
