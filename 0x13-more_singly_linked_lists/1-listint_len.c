#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head element of the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
