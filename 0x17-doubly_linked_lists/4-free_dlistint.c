#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: pointer to the head element of a list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
