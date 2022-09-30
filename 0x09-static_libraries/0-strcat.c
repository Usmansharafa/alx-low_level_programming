#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: pointer to destination
 *
 * @src: pointer to source
 *
 * Return: concated strings dest and src
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len, i, j, total;

	dest_len = _strlen(dest);
	src_len = _strlen(src);
	total = dest_len + src_len;
	j = 0;

	for (i = dest_len; i < total; ++i)
	{
		dest[i] = src[j];
		++j;
	}
	dest[total] = '\0';
	return (dest);
}

/**
 * _strlen - Returns the length of a string
 *
 * @s: string whose length is to be returned
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
