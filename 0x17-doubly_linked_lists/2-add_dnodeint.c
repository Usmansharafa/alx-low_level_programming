#include "lists.h"

/**
 * add_dnodeint - Adds a new node to the beginning of the list
 * @head: Pointer to singly linked list
 * @n: n member of new node
 * Return: Address of new node or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
