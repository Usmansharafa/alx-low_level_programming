#include "main.h"

/**
 * _strncpy - Makes a copy of a string
 *
 * @dest: Address of new copy of string
 *
 * @src: Address of string to be copied
 *
 * @n: bytes of src to be copied
 *
 * Return: Address of new copy of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
