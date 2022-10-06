#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @b: number of bytes to be allocated
 * Return: a void pointer
 */
void *malloc_checked(unsigned int b)
{
	char *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);

	return (new);
}
