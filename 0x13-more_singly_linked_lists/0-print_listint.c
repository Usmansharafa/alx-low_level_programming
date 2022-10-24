#include "lists.h"

/**
 * print_listint - Prints each node of a singly linked list
 * @h: Pointer to head of singly linked list
 * Return: Number of nodes in the singly linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
