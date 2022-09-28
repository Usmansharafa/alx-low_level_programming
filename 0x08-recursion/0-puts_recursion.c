#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a newline
 *
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) != '\0')
		_puts_recursion(s + 1);
}
