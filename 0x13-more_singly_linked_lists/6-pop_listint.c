#include "lists.h"

/**
 * pop_listint - Deletse the head node of a linked list
 * @head: Address of linked list
 * Return: Integer member of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head, *new = *head;
	int num;

	if (head == NULL)
		return (0);

	num = new->n;
	new_head = new->next;
	free(new);
	*head = new_head;
	return (num);
}
