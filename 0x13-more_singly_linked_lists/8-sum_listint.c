#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data(n) in a list
 * @head: pointer to the first element of the list
 *
 * Return: sum of all the data in the list, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
