#include "main.h"

/**
 * _strpbrk - Locates the first occurence in the string s of
 * any of the bytes in string accept
 *
 * @s: string to be checked
 *
 * @accept: any byte of string to look for in s
 *
 * Return: Pointer to the byte in s that matches one of the bytes
 * in s or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
				count++;
		}
		if (count > 0)
			break;
		i++;
	}
	if (count > 0)
		return (s + i);
	return ('\0');
}
