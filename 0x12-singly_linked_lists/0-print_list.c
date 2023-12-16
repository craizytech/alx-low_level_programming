#include "lists.h"

/**
 * print_list - function that prints all the elements in the list
 * @h: the list of elements
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while(h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			continue;
		}
		printf("[%d] %s", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
		
