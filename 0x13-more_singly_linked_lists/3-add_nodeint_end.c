#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t list
 * @head: double pointer
 * @n: number to be added to the node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *ptr;

	if (*head == NULL)
		return (NULL);

	/* assign memory using malloc and data to the members */
	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = NULL;

	/* loop through the the list until you get to the last node */
	ptr = *head;

	while (ptr->next)
		ptr = ptr->next;
	ptr->next = node;

	return (node);
}
