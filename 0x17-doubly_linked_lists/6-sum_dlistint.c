#include "lists.h"

/**
 * sum_dlistint - Sums all the data(n) of a doubly linked list
 * @head: Doubly linked list
 * Return: Sum of all data(n) of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head->prev)
		head = head->prev;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
