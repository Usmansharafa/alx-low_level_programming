#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: string to be checked
 *
 * @accept: substring to look for
 *
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int temp, count;
	int i, j, s_len, accept_len;

	s_len = _strlen(s);
	accept_len = _strlen(accept);

	count = 0;
	for(i = 0; i < s_len; ++i)
	{
		temp = count;
		for (j = 0; j < accept_len; ++j)
		{
			if (s[i] == accept[j])
				++count;
		}
		if (temp == count)
			break;
	}

	return (count);
}

/**
 * _strlen - Gets the length of a string
 *
 * @s: String whose length is to be found
 *
 * Return: Lenght of string s
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len)
		;

	return (len);
}

