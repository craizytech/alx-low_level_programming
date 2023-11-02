#include "lists.h"

/**
 * get_nodeint_at_index - func that returns the nth node of a listint_t list
 * @head: pointer to the first element of the list
 * @index: the location of the required int
 *
 * Return: location of the int or NULL if the node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count;

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
