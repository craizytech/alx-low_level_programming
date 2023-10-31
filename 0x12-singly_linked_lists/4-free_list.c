#include "lists.h"

/**
 * free_list - frees memory occupied by a linked list
 * @head: pointer to the head of the linked list
 */

void free_list(list_t *head)
{
	/* Create a tmp ptr struct to hold the current pointer */

	list_t *ptr;

	/**
	 * while loop
	 * checks if the head is a valid pointer
	 * assigns  the value of head to the temporary pointer
	 * then reassigns head to point to the next node (detach)
	 * frees ptr and also frees the str pointer
	 * This loops through the list until the list is empty
	 */
	while(head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
