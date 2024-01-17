#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of the list
 * @head: double pointer to the head of the linked list
 * @n: the n value of the new node in the new node
 *
 * Return: the address of the new node or null if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (ptr == NULL)
		*head = new_node;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);
}
