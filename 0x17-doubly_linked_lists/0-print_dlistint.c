#include "lists.h"

/**
 * print_dlistint - Prints elements of a doubly linked list
 * @h: Pointer to doubly linked list
 * Return: Number of nodes in doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	
	while (h)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return(count);
}
