#include "lists.h"
#include <string.h>

/**
 * add_node - Adds node to the beginning of a linked list
 * @head: Address of linked list
 * @str: String member of node
 * Return: Address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int n;

	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	n = _strlen(str);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->str = strdup(str);
	new->len = n;
	*head = new;
	return (*head);
}

/**
 * _strlen - Gets the length of a string
 * @s: String whose length is to be found
 * Return: Length of string s
 */
unsigned int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
