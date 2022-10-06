#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the previously allocated memory
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes of new memory block
 * Return: a void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = _memset(new, 0, old_size);
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
