#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: double pointer
 * @n: number to be added to the node
 *
 * Return: pointer to the newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *ptr;

	/* assign memory using malloc and data to the members */
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	ptr = *head;

	/* special case where we are inserting the first node */
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	/* loop through the list until the you get to the last element */
	while (ptr->next)
	{
		ptr = ptr->next;
	}

	ptr->next = node;

	return (node);
}
