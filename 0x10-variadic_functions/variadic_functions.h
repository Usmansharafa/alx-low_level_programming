#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - A new data structure for handling
 * printing
 * @symbol: Symbol representing data type
 * @f: Function pointer that prints data according to
 * the format
 */
typedef struct print
{
	char *symbol;
	void (*f)(va_list arg);
} printer;

#endif /* VARIADIC_FUNCTION_H */
