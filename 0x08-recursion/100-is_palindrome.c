#include "main.h"

/**
 * is_palindrome - Returns true if a string is a palindrome or not
 * @s: string to be checked
 * Return: 1 if s is a palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	int i, len;

	len = _strlen_recursion(s);
	i = 0;

	if (!(*s))
		return (1);

	return (checker(s, len, i));
}

/**
 * checker - Checks whether a string is a palindrome
 * @s: string to be checked
 * @len: length of string to be checked
 * @index: The index of string s to be checked
 * Return: 1 if s is a palindrome or 0 if not
 */
int checker(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (checker(s, len, index + 1));
	return (0);
}

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
