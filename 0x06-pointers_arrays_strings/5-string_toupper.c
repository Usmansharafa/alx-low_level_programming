#include "main.h"

/**
 * string_toupper - Changes all the alphabets in a string to uppercase
 *
 * @s: string to be uppercased
 * Return: pointer to uppercased string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
	}

	return (s);
}
