#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: double pointer to the head element in the list
 * @n: the number to be added to the node
 *
 * Return: address of the new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while ((ptr->next) != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}

	return (new_node);
}
