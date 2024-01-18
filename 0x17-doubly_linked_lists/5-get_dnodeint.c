#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlist
 * @head: the head element of a linked list
 * @index: the index of a node starting from 0
 *
 * Return: the address of the node, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (index > 0 && current != NULL)
	{
		current = current->next;
		index--;
	}

	if (index > 0)
		return (NULL);
	return (current);
}
