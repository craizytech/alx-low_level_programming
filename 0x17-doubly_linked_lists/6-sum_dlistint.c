#include "lists.h"

/**
 * sum_dlistint - function hat returns the sum of all the data of a dlist
 * @head: pointer to the head of a dlist
 *
 * Return: sum of the n values of all the nodes in a dlist
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
