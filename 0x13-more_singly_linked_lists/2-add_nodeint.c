#include "lists.h"

/**
 * adds a node to the beginning of a list
 * @head: double pointer to the beginning of the list
 * @n: the value of n to be added to the n member of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
