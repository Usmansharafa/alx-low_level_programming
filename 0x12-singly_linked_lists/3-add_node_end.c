#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a node to the end of a linked list
 * @head: Pointer to the singly linked list
 * @str: Member of new node
 * Return: Pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	n = _strlen(str);
	new->str = strdup(str);
	new->len = n;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
/**
 * _strlen - Gets the length of a string
 * @s: String whose lenght is to be found
 * Return: Lenght of string s
 */
unsigned int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
