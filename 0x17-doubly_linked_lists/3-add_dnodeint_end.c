#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of the list
 * @head: Pointer to doubly linked list
 * @n: n member of new node
 * Return: Address of new node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	current = *head;
	if (!*head)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (current->next)
			current = current->next;
		new->prev = current;
		current->next = new;
	}
	return (new);
}
