#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 * @head: double pointer to the the head element
 * @index: position of the element to be deleted
 *
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current_node = *head;
	listint_t *previous_node;

	if (*head == NULL)
		return (-1);

	while (count < index && current_node != NULL)
	{
		previous_node = current_node;
		current_node = current_node->next;
		count++;
	}
	if (count < index)
		return (-1);
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	/* delete the current node */
	previous_node->next = current_node->next;

	free(current_node);

	return (1);
}
