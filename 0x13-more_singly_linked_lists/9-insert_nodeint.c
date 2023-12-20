#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a node to an index
 * @head: double pointer to the head element
 * @idx: the index in the list where the new node should be inserted
 * @n: the number to be inserted as a member of the new node
 *
 * Return: returns the address of the new node else NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *ptr = *head;
	listint_t *new_node, *prev_node;

	if (head == NULL)
		return (NULL);

	while (count < idx && ptr != NULL)
	{
		prev_node = ptr;
		ptr = ptr->next;
		count++;
	}

	if (count < idx)
		return (NULL);


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = ptr;

	if (count == 0)
		*head = new_node;
	else
		prev_node->next = new_node;

	return (new_node);
}


