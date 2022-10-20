#include "lists.h"

/**
 * list_len - Gets ths number of elements in a singly linked list
 * @h: Pointer to singly linked list
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
