#include "lists.h"

/**
 * dlistint_len - Gets the number of element in a doubly linked list
 * @h: Doubly linked list
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
