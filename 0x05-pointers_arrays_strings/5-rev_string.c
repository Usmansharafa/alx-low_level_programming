#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, len, half;
	char temp;

	len = _strlen(s);
	half = len / 2;

	for (i = 0; i < half; ++i)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}

}

/**
 * _strlen - gets the length of a string
 *
 * @s: string whose length is to be found
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; ++length)
		;
	return (length);
}
