#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in the list
 * @head: double pointer to the first element in the list
 * @idx: location to insert the new element
 * @n: the new number to be added to the list
 *
 * Return: the address of the new node or NULL if the operation fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* create a tmp pointer to be used to traverse the list and a new node */
	unsigned int node;
	listint_t *new, *copy = *head;

	/* assign memory to the the new node and insert the data */
	new = malloc(sizeof(listint_t));
	if (new  == NULL)
		return (NULL);

	new->n = n;

	/* Check if the node is empty then insert the newnode */
	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	/* using a for loop loop through the list until the idx-1 element */
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	/* set the next pointer of the new node to the next element */
	new->next = copy->next;
	copy->next = new;

	return (new);
}
