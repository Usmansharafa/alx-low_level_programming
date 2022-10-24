#include "lists.h"

/**
 * listint_len - Gets the number of nodes of a singly linked list
 * @h: Pointer to singly linked list
 * Return: Number of nodes in singly linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
