#include "variadic_functions.h"

/**
 * print_all - Prints all arguments
 * @format: Format of arguments
 * @...: Variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int arg_len, i = 0;
	char *string;

	arg_len = _strlen(format);
	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(args, double));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 's':
			string = va_arg(args, char *);
			(string != NULL) ? printf("%s", string) : printf("(nil)");
			break;
		default:
			break;
		}
		if (arg_len - i > 1 && (format[i] == 'c' ||
		format[i] == 'd' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * _strlen - Gets the length of a string
 * @s: String whose length is to be found
 * Return: Length of string s
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s && s[len])
		len++;

	return (len);
}
