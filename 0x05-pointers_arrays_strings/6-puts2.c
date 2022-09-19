#include "main.h"

int _strlen(char *s);
/**
 * puts2 - prints even positioned characters in a string
 *
 * @str: string to be worked upon
 */
void puts2(char *str)
{
	int len, i;

	len = _strlen(str);
	for (i = 0; i < len + 1; i += 2)
		_putchar(str[i]);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: string whose length is to be found
 *
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != 0; ++count)
		;

	return (count);
}
