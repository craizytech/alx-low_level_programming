#include "lists.h"

/**
 * add_node_end - function that adds a node to the end of the list
 * @head: pointer to the head of the linked list
 * @str: string to be added
 *
 * Return: pointer to the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* create a node with the list_t structure and allocate memory */

	list_t *node, *ptr;

	node = malloc(sizeof(list_t));
	ptr = *head;

	/* guard clause incase malloc fails */
	if (node == NULL)
		return (NULL);

	/* assign data to the members of the new node */
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	/* Special case where the list fails*/
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	/* loop through the list until the last element */
	while (ptr->next)
		ptr = ptr->next;

	/* connect the node to the rest of the linked list */
	ptr->next = node;

	return (node);
}

