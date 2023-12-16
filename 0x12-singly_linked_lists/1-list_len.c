#include "lists.h"

/**
 * list_len - this function returns the length of the list
 * @h: pointer to the head element
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
