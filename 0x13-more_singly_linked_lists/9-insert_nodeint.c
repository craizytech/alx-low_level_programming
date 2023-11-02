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
	unsigned int count;
	listint_t *tmp, *node;
	tmp = *head;
	node->n = n;

	for (count = 0; count < index; count++)
		tmp = tmp->next;
	node->next = tmp;
	tmp = node;

	return (node);
}
