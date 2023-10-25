#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints each node in a list
 * @h: pointer to the head oh the list passed
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
