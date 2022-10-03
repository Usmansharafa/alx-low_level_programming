#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	char tmp;
	int i, s1_len, s2_len, total;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	total = s1_len + s2_len;
	new = malloc(total + 1);
	if (new == NULL)
		return ('\0');

	for (i = 0; i < s1_len; ++i)
	{
		tmp = s1[i];
		new[i] = tmp;
	}

	for (i = 0; i < s2_len; ++i)
	{
		tmp = s2[i];
		new[s1_len + i] = tmp;
	}

	new[total] = '\0';

	return (new);
}

/**
 * _strlen - Gets the length of a string
 * @s: String whose length is to be found
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len)
		;

	return (len);
}
