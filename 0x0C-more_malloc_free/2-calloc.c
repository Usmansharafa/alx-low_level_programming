#include "main.h"

/**
 * _calloc -Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element of the array
 * Return: A void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	new = malloc(nmemb * size);
	if (new == NULL)
		return (NULL);
	new = _memset(new, 0, nmemb * size);
	return (new);
}

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to memory to be filled
 * @b: char to be filled in memory
 * @n: number of bytes of s to fill
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
