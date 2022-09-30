#include "main.h"

/**
 * _isdigit - Tells whether a character is a digit or not
 *
 * @c: Character to be checked
 *
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
