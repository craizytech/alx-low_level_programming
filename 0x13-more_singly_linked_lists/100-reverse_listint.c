#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: double pointer to the head node of the linked list
 *
 * Return: the address of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next = NULL, *prev = NULL;

	/* Traverse and Reverse */
	while (current != NULL)
	{
		/* save the current node */
		next = current->next;

		/* reverse the list */
		current->next = prev;

		/* move one step forward */
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
