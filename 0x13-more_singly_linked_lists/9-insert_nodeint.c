#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head element of a list
 * @idx: the index to insert the new node
 * @n: the value of n to inssert into the new list
 *
 * Return: The address of the new node or null if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head, *prev;

	if (current == NULL)
		return (NULL);
	while (idx > 0)
	{
		prev = current;
		if (current == NULL)
			return (NULL);
		current = current->next;
		idx--;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current;
	prev->next = new_node;

	return (new_node);
}
