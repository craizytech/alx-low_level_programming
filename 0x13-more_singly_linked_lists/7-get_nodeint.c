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
	listint_t *ptr;

	ptr = head;

	for (c = 0; c < index; c++)
	{
		ptr = ptr->next;

		if (!(ptr->next))
			return (NULL);
	}
	return (ptr->next);
}
