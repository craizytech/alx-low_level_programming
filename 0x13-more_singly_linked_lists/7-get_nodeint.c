#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: the first node of a linked list
 * @index: is the index of the node starting from 0
 * 
 * Return: pointer to the nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index; c++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
