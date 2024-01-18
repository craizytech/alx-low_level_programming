#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given pos in a dlist
 * @h: pointer to the head element of the dlist
 * @idx: where the new node should be added
 * @n: the value of n that should be added into the new_node
 *
 * Return: the address of the new node, or null if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0 || current == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	
	while (idx > 0 && current != NULL)
	{
		current = current->next;
		idx--;
	}
	if (idx > 0)
		return (NULL);
	new_node->next = current;
	(current->prev)->next = new_node;
	new_node->prev = current->prev;
	current->prev = new_node;

	return (new_node);
}
