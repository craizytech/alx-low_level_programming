#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at index of a list
 * @head: double pointer to the beginning of the list
 * @index: the index to be removed
 *
 * Return: 1 if succesfull 0 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev = NULL;

	if (head == NULL)
		return (-1);
	if (index == 0 && current != NULL)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (index > 0 && current != NULL)
	{
		prev = current;
		current = current->next;
		index--;
	}
	if (index > 0 || current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}
