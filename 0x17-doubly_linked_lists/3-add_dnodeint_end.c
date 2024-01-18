#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a dlist
 * @head: pointer to the head of a dlist
 * @n: new value of n to be inserted into the new node
 *
 * Return: adresses of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (ptr == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
