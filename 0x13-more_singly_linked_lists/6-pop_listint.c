#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head element of a linked list
 *
 * Return: the data(n) of the list else return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int num;

	if (*head == NULL)
		return (0);
	num = (*head)->n;
	*head = (*head)->next;
	free(ptr);

	return (num);
}
