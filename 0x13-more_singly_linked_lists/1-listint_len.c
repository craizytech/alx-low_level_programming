#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked list
 * @h: pointer to the head element of a list
 *
 * Returns: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
