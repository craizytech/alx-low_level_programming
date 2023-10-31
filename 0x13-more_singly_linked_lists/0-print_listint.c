#include "lists.h"

/**
 * print_listint - prints all the elements of the list
 * @h: pointer to the head node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	int count  = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
