#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: string to check
 *
 * @c: character to look for in string s
 *
 * Return: Pointer to the first occurence of the character c in the string s
 * or NULL if character not found
 */
char *_strchr(char *s, char c)
{
	int i, len;

	for (len = 0; s[len] != '\0'; ++len)
		;

	i = 0;
	while (s[i] != c)
	{
		if (i == len)
			return (NULL);
		++i;
	}

	return (s + i);
}
