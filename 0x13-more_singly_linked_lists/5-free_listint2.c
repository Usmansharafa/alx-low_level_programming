#include "lists.h"

/**
 * free_listint2 - Frees a singly linked list and sets head to NULL
 * @head: List to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while ((temp = *head) != NULL)
	{
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
