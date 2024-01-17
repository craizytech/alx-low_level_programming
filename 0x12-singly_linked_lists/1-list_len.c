#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head element of a linked list
 *
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
