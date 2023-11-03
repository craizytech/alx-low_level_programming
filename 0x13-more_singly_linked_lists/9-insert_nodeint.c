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
	//creating the new and copy pointer and also the index variable
	listint_t *new, *copy;
	unsigned int index;

	//assign memory and data to the created nodes
	new = malloc(sizeof(listint_t));
	copy = *head;
	new->n = n;

	//check if malloc op was a success or whether the list is empty
	if (new == NULL)
		return (NULL);
	
	if (copy == NULL)
	{
		*head = new;
		return (new);
	}

	//Loop through the list until nth-1 node(node just before the index)
	for (index = 0; index < (idx -1); index++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	//now copy is at the index just before the required index
	new->next = copy->next;
	copy->next = new;

	return (new);
}
