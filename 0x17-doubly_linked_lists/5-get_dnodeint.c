#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a doubly linked list
 * @head: Doubly linked list
 * @index: Index of the node
 * Return: Nth node of doubly linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	if (!head)
		return (NULL);
	current = head;
	while (current->next)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
