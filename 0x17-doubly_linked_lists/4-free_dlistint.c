#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Doubly linked list to be free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (!head)
		return;
	while ((current = head))
	{
		head = head->next;
		free(current);
	}
}
