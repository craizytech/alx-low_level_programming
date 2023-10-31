#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a list
 * @head: double pointer to the beggining of the list
 * @n: the number to be inserted into the node created
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create the new node by defining it using structure and assign memory */
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	/* Assign data to the members of the node */
	node->n = n;

	/* connect the node to the rest of the list */
	node->next = *head;
	*head = node;

	return (node);
}
