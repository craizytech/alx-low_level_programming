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
	unsigned int count;
	listint_t *tmp, *node;

	/* assign memory to the the new node and insert the data */
	node = malloc(sizeof(listint_t));
	tmp = *head;
	node->n = n;

	/* using a for loop loop through the list until the idx-1 element */
	for (count = 0; count < idx; count++)
		tmp = tmp->next;

	/* set the next pointer of the new node to the next element */
	node->next = tmp;

	/* set the next pointer of the idx-1 element to the new node */
	tmp = node;

	return (node);
}
