#include "main.h"

/**
 * _strstr - Finds first occurrence of substring needle in the string
 * haystack
 *
 * @haystack: String to be searched
 *
 * @needle: String to find
 *
 * Return: Pointer to the beginning of the located string
 */
char *_strstr(char *haystack, char *needle)
{
	int haystack_len, needle_len, count, i, j, k;

	haystack_len = _strlen(haystack);
	needle_len = _strlen(needle);

	if (needle_len == 0)
		return (haystack);
	i = 0;
	count = 0;
	while (i < haystack_len)
	{
		if (haystack[i] == needle[0])
		{
			++count;
			k = i + 1;
			j = 1;
			while (j < needle_len)
			{
				if (haystack[k] == needle[j])
				{
					++count;
					++k;
					++j;
				}
			}
			if (count == needle_len)
				return (haystack + i);
		}
		++i;
	}
	return (NULL);
}

/**
 * _strlen - gets the length of a string
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
