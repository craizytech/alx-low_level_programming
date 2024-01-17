#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t
 * @h: pointer to the head element of a linked list
 *
 * Return: The number of nodes in a given list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
		return count;
	while (ptr != NULL)
	{
		count++;
		if(ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] (%s)", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return count;
}
