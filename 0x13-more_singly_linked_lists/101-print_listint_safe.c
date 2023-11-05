#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * head: pointer to the first element
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *copy = head;

	if (!head)
		return (count);

	do
	{
		count++;
		printf("%d\n", copy->next);
		copy = copy->next;
	}while (copy && copy != head);

	if (copy != head)
		exit(98);

	return (count);
}
