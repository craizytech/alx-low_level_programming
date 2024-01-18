#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specific index
 * @head: double pointer to the head of the linked list
 * @idx: is the index of the list where the new node should be added
 * @n: This is the value of n
 *
 * Return: The address of the new node or null if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *prev = NULL, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx == 0 || *head == NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (idx > 0 && current != NULL)
	{
		prev = current;
		current = current->next;
		idx--;
	}
	if (idx > 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current;
	prev->next = new_node;

	return (new_node);
}
