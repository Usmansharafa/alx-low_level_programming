#include "main.h"

/**
 * leet - Encodes a string by changing specific characters
 *
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i, j = 0;
	int low_alph[] = {97, 101, 108, 111, 116};
	int up_alph[] = {65, 69, 76, 79, 84};
	int encoder[] = {52, 51, 49, 48, 55};


	while (s[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[j] == low_alph[i] || s[j] == up_alph[i])
			{
				s[j] = encoder[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
