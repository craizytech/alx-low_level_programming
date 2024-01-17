#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head element of the list
 * index: index of the node to return
 *
 * Return: The address of the nth node of a linkedlist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;

	if (ptr == NULL)
		return (NULL);

	while (index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
