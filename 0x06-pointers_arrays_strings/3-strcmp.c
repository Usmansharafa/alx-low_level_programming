#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: 0 if s1 and s2 are equal
 *   -15 if s1 is less than s2;
 *   15 value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, s1_len, s2_len, count;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (s1_len < s2_len)
		return (-15);
	else if (s1_len > s2_len)
		return (15);
	count = 0;
	for (i = 0; i <= s1_len; ++i)
	{
		if (s1[i] == s2[i])
			continue;
		else if (s1[i] < s2[i])
			count = s2[i] - s1[i];
		else if (s1[i] > s2[i])
			count = s1[i] - s2[i];
	}
	return (count);
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
