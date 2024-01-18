#include "lists.h"

/**
 * print_listint_safe - prints a list even those with loops
 * @head: pointer to the head element of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head, *ptr = head;

	if (head == NULL)
		exit(98);

	/* Impliment the loop detection mechanism */
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			exit(98);
	}

	/* Iterate through the loop incrementing count */
	while (ptr != NULL && ptr != slow)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
