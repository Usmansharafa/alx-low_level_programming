#include "main.h"

/**
 * _strdup - Creates a copy of a string
 * @str: String to duplicate
 * Return: Pointer to duplicate string or NULL if str is
 * equal to NULL
 */
char *_strdup(char *str)
{
	char *dup;
	char tmp;
	int i, len;

	if (str == NULL)
		return ('\0');
	len = _strlen(str);

	dup = malloc(len + 1);

	for (i = 0; i < len; i++)
	{
		tmp = str[i];
		dup[i] = tmp;
	}

	dup[len] = '\0';

	return (dup);
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
