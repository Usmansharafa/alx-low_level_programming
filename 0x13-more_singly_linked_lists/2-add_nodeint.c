#include "lists.h"

/**
 * add_nodeint - Adds node to the beginning of a linked list
 * @head: Address of a linked list
 * @n: Integer member of node
 * Return: Address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
