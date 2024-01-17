#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 * @head: the pointer to the head element of a list
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while(ptr != NULL)
	{
		ptr = ptr->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
