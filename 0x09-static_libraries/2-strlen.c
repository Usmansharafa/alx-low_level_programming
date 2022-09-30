#include "main.h"

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
