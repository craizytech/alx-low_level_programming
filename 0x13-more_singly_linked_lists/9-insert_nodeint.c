#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: start node
 * @idx: index where the new node should be inserted
 * @n: the numner to be inserted into the new node
 *
 * Return: address of the new node or null if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy;
	unsigned int index;

	new = malloc(sizeof(listint_t));
	copy = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	for (index = 0; index < (idx -1); index++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
