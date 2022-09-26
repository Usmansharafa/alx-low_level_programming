#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 *
 * @dest: Memory area to receive copy of bytes
 *
 * @src: Memory area to get copy of bytes
 *
 * @n: number of bytes to copy from src
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
