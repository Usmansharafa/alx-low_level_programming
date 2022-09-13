#include "main.h"

/**
 * _islower - Tells whether a character is a lowercase alphabet
 * or not
 *
 * @c: This is the alphabet to be checked
 *
 * Return: 1 (If lowercase) or 0 (Otherwise)
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
