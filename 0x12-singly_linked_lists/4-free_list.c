#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while(head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
