#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes a node at an index of a list
 * @head: double pointer to the head element of a list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if operation succeds -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev = NULL;

	if (head == NULL)
		return (NULL);

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
