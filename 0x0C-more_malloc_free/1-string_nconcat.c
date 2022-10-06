#include "main.h"

/**
 * string_nconcat - Concatenates one string with n bytes of another
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes
 * Return: Pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, s1_len, s2_len, total;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (n >= s2_len)
		n = s2_len;
	total = s1_len + n;

	new = malloc(sizeof(char) * total + 1);
	for (i = 0; i < s1_len; i++)
		new[i] = s1[i];
	for (i = 0; i < n; i++)
		new[s1_len + i] = s2[i];
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

	len = 0;
	while (*s != 0)
	{
		len++;
		s++;
	}

	return (len);
}
