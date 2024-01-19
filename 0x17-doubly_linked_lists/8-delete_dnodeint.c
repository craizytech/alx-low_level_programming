#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes a node at index of a dlist
 * @head: double pointer to the head element of a list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if it succeeds, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if (current->next != NULL)
		{
			*head = current->next;
			current->next->prev = NULL;
		}
		else
			*head = NULL;
		free(current);
		return (1);
	}
	while (index > 0 && current != NULL)
	{
		current = current->next;
		index--;
	}
	if (index > 0 || current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
