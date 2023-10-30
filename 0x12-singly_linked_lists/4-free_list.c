#include "lists.h"

/**
 * free_list - frees memory occupied by a linked list
 * @head: pointer to the head of the linked list
 */

void free_list(list_t *head)
{
	list *ptr;

	ptr = head;

	while(ptr)
	{
		ptr = ptr->next;
		free(ptr->next);
	}
	free(ptr);
}
