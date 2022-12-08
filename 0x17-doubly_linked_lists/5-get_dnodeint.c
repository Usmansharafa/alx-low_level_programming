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

	if (!head)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
