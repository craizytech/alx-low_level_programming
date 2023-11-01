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
	int num;

	if (head == NULL)
		return (0);

	ptr = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(ptr);

	return (num);
}
