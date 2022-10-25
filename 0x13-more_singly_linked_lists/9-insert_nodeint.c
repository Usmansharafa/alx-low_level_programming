#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to address of linked list
 * @idx: Index of the list where the new node should be added
 * @n: Int member of new node
 * Return: Address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int count = 1;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	current = *head;
	new->n = n;
	while (current->next != NULL)
	{
		if (count == idx)
		{
			new->next = current->next;
			current->next = new;
			break;
		}
		count++;
		current = current->next;
	}
	if (count == idx)
		return (*head);
	return (NULL);
}
