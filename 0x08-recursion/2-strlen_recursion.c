#include "main.h"

/**
 * _strlen_recursion - Gets the length of a string
 * @s: String whose length is to be found
 * Return: Length of string s
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (s[count] != '\0')
		count++;
	else if (s[count] == '\0')
		return (0);
	return (count + _strlen_recursion(s + count));
}
