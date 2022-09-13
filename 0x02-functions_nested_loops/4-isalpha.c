#include "main.h"

/**
 * _isalpha - Tells whether a character is an alphabet or not
 *
 * @c: character to be checked
 *
 * Return: 1 (if alphabet) or 0 (Otherwise)
 */
int _isalpha(int c)
{
	if (96 < c < 123 || 64 < c < 91)
	{
		return (1);
	}
	return (0);
}
