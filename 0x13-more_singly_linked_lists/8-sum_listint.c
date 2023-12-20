#include "lists.h"

/**
 * sum_listint - function that returns all the data(n) of a listint_t list
 * @head: pointer to the head element of the list
 *
 * Return: sum of the list otherwise 0 if it failes
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
		if (ptr == NULL)
			break;
	}

	return (sum);
}
