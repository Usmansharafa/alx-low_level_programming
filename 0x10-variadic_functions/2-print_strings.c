#include "variadic_functions.h"

/**
 * print_strings - Prints n strings
 * @separator: Delimeter between each string
 * @n: Number of strings to print
 * @...: n number of string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (separator && (n - i) > 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
