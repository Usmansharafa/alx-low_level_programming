#include "main.h"

/**
 * cap_string - Uppercases first letter of words after specific separators
 *
 * @s: string to be capitalized
 *
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (i == 0)
		{
			if (s[i] > 96 && s[i] < 123)
				s[i] = s[i] - 32;
		}

		if ((s[i] == 9 || s[i] == 32 || s[i] == 10 || s[i] == '!' || s[i] == ',' ||
		s[i] == '.' || s[i] == ';' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
		s[i] == ')' || s[i] == '{' || s[i] == '}') &&
		(s[i + 1] > 96 && s[i + 1] < 123))
			s[i + 1] = s[i + 1] - 32;
	}

	return (s);
}
