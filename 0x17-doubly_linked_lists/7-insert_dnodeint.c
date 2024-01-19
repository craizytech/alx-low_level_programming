#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts s new node at a given position
 * @h: double pointer to the head element of the dlist
 * @idx: index of the list where the new node should be added
 * @n: the value of n to insert into the new node
 *
 * Return: The address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0 || current == NULL)
	{
		new_node->prev = NULL;
		if (current == NULL)
			new_node->next = NULL;
		else
		{
			current->prev = new_node;
			new_node->next = current;
		}
		*h = new_node;
		return (new_node);
	}
	while (idx > 0 && current != NULL)
	{
		current = current->next;
		idx--;
	}
	if (idx > 0 || current == NULL)
		return (NULL);
	new_node->next = current;
	new_node->prev = current->prev;
	current->prev->next = new_node;
	current->prev = new_node;
	return (new_node);
}
