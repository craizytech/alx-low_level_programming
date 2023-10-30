#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to a linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	int count = 0;

	ptr = h;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
