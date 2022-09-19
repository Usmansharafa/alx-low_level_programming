#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: string
 */
void puts_half(char *str)
{
	int len, i;

	len = _strlen(str);
	
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; ++i)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		for (i = (len / 2) + 1; str[i] != '\0'; ++i)
			_putchar(str[i]);
		_putchar('\n');
	}
}

/**
 * _strlen - returns the length of a string
 *
 * @s: string whose length is to be returned
 *
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count)
		;

	return (count);
}
