#include "lists.h"

/**
 * sum_listint - Sums all integer members of linked list
 * @head: Address of linked list
 * Return: Sum of all data (n) of linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
