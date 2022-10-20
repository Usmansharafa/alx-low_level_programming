#include "lists.h"
#include <string.h>

list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	list_t *new = malloc(sizeof(list_t));
	unsigned int n;

	if (new == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	n = _strlen(s);
	new->str = s;
	new->len = n;
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * _strlen - Gets the length of a string
 * @s: String whose length is to be found
 * Return: Length of string s
 */
unsigned int _strlen(char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++);

	return (len);
}
