#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: double pointer to the head of a list
 * @index: the location of the node to be deleted\
 *
 * Return: 1 if the operation is successful and -1 if the operation fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *tmp;
	unsigned int count;

	for (count = 0; count < (index - 1); count++)
	{
		if (ptr == NULL)
			return (-1);

		ptr = ptr->next;
	}
	tmp = ptr->next->next;
	free(ptr);
	
	ptr->next = tmp;

	return (1);

}
