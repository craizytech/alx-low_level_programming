#include "lists.h"

/**
 * pop_listint - deletes the headnode of a list and returns headnodes data(n)
 * @head: pointer to the first node of the list
 *
 * Return: n of the new node or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return (0);
	
	while (*head)
	{
		ptr = head;
		head = (*head)->next;
		free(ptr);
	}
	return ((*head)->n);
}
