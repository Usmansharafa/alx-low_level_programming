#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node of a doubly 
 * linked list at a given index
 * @head: Pointer to doubly linked list
 * @index: Index of the node to be deleted
 * Return: 1 if successful, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!*head)
		return (-1);
	for (; index != 0; index--)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
