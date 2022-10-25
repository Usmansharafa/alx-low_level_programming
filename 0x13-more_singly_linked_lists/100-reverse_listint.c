#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to address of linked list
 * Return: Pointer to head node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *temp = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
}
