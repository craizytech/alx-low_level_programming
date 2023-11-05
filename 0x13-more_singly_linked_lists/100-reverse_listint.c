#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the first node
 *
 * Return: address of the 1st element after the list has been reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	/* create three pointers used to traverse/loop/reverse the list */

	listint_t *current = *head;
	listint_t *prev = NULL;
	listint_t *next;

	/* loop to reverse the linked list */
	while (current)
	{
		next = current->next;
		current->next = prev;
		
		prev = current;
		current = next;
	}
	/* the prev stores the last value of the node */
	*head = prev;

	return (*head);
}
