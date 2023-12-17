#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head element of a linked list
 * @index: the position of the node that the function returns
 *
 * Return: address of the node, NULL if the node doesn't exist
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
