#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the linked list
 * @index: the postion of the node we want to retrieve
 *
 * Return: address of the node at the position index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	if (index > count - 1)
		return (NULL);

	ptr = head;
	count = 0;

	while (count < index)
	{
		ptr = ptr->next;
		count++;
	}

	return (ptr);
}
