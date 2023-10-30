#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a node element
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *ptr;
	int count = 0;

	ptr = h;

	while (ptr)
	{
		printf("[%d] ", ptr->len);
		if (ptr->str)
			printf("%s\n", ptr->str);
		else
			printf("(nil)\n");

		ptr = ptr->next;
		count++;
	}

	return (count);
}

