#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @h: pointer to the head element
 *
 * Return: address of the new element or null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create a new node and assign data to the members*/
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
