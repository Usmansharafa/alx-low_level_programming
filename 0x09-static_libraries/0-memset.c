#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: pointer to memory to be filled
 *
 * @b: char to be filled in memory
 *
 * @n: number of bytes of s to fill
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		s[i] = b;

	return (s);
}
