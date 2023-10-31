#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head pointer
 *
 * Return: the number of nodes in the playlist
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *ptr;

	ptr = head;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
