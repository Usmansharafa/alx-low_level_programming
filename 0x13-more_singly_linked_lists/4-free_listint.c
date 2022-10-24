#include "lists.h"

/**
 * free_listint - Frees a singly linked list
 * @head: List to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
