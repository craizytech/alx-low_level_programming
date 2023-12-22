#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head element
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *previous = NULL, *next = NULL;

	/* Traverse and reverse */
	while (current != NULL)
	{
		/* save the current node */
		next = current->next;

		/* reverse the link */
		current->next = previous;

		/* move the pointers one step forward */
		previous = current;
		current = next;
	}
	*head = previous;

	return (*head);
}
