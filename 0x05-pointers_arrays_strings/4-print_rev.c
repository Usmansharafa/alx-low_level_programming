#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int i, j, len;

	len = _strlen(s);
	j = len;
	for (; j >= 0; --j)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

/**
 * _strlen - Gets the length of a string
 *
 * @s: string of which its length is returned
 *
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int i, count;

	count = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		++count;
	}

	return (count);
}
