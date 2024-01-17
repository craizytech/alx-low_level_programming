#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: double pointer to the head element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
