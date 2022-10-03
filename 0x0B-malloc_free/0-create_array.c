#include "main.h"

/**
 * create_array - Creates an array of size n and initializes it with char c
 * @size: size of array
 * @c: character to initialize array with
 * Return: pointer to new array or NULL if size is equal to 0
 * or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *new;
	unsigned int i;

	if (size == 0)
		return ('\0');
	new = malloc(sizeof(char) * size);
	if (new == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
		new[i] = c;
	return (new);
}
