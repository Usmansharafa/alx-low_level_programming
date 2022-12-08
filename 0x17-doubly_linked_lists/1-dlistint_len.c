#include "lists.h"

/**
 * dlistint_len - Gets the number of element in a doubly linked list
 * @h: Doubly linked list
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
