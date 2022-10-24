#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a linked list
 * @head: Address of linked list
 * @index: Index of the node, starting at 0
 * Return: Pointer to node if it exists, else, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 1;

	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		if ((count - 1) == index)
			return (head);
		count++;
		head = head->next;
	}
	if ((count - 1) == index)
		return (head);
	return (NULL);
}
