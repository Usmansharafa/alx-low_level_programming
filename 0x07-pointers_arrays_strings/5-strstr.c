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
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
