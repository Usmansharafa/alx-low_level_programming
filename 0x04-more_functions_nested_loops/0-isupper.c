include "main.h"

/**
 * _isupper - Tells whether a character is an uppercase alphabet
 * or not
 *
 * @c: Character to be checked
 *
 * Return: 1 if Uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	       return (1);
	return (0);
}	
