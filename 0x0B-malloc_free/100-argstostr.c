#include "main.h"

int _arrlen(char *s[], int count);
/**
 * argstostr - Concatenates all the arguments of the
 * program
 * @ac: argument count
 * @av: argument value
 * Return: Pointer to new string
 */
char *argstostr(int ac, char *av[])
{
	char *new;
	int len, i, j, k = 0;
	
	if (ac == 0 || av == NULL)
		return (NULL);

	len = _arrlen(av, ac);

	new = malloc(sizeof(char) * len + ac);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k] = av[i][j];
			k++;
		}
		new[k] = '\n';
		k++;
	}
	return (new);
}

/**
 * _arrlen - Gets the  total length of values of a 2d array
 * @s: 2d array
 * @count: number of arguments
 * Return: Total length of values of 2d array
 */
int _arrlen(char *s[], int count)
{
	int i, j, len;

	len = 0;
	for (i = 0; i < count; i++)
	{
		for(j = 0; s[i][j] != '\0'; j++)
			len++;
	}
	return (len);
}
