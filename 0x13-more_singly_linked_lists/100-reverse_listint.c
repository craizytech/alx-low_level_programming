#include "lists.h"

/**
 * reverse_listint - reverses a link list
 * @head: first node of the list
 *
 * Return: address of the first element of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *prev = NULL, *next;

	while (current)
	{
		next = current->next;
		current->next = prev;

		prev = current;	
		current = next;
	}

	head = prev;

	return (head);
}
