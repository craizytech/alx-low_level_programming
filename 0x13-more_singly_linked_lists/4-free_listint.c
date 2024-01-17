#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer to the head of a list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
