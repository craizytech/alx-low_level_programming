#include "lists.h"

/**
 * pop_listint - deletes the head node and returns the head node data
 * @head: double pointer to the head node of a linked list
 *
 * Return: n or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (ptr == NULL)
		return (0);
	n = ptr->n;
	*head = ptr->next;

	free(ptr);
	return (n);
}
