#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data(n) in a list
 * @head: pointer to the head element of a linked list
 *
 * Return: sum of all the data in a linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
		return (sum);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
