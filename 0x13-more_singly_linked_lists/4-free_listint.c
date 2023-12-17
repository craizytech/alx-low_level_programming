#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the head element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
