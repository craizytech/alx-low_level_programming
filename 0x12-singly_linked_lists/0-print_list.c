#include "lists.h"

/**
 * print_list - function that prints all the elements in the list
 * @h: the list of elements
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		count++;
		ptr = ptr->next;
	}
	return (count);
}
