#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: pointer to destination
 *
 * @src: pointer to source
 *
 * @n: most number of bytes from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * _strlen - Returns the length of a string
 *
 * @s: string whose length is to be found
 *
 * Return: Length of string s
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len)
		;

	return (len);
}
