#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a dlist
 * @head: double pointer to the head of a doubly linked list
 * @n: number to insert into the new node
 *
 * Return: the new element or null if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	else
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
}

