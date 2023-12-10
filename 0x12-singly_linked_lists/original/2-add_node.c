#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: double pointer to the head node
 * @str: the string that is to be added to the beginning of the node
 *
 * Return: pointer to the newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
	/* create a new node and allocate memory */

	list_t *node;

	node = malloc(sizeof(list_t));

	/* guard clause if result of malloc is null */
	if (node == NULL)
		return (NULL);

	/* assign the data to the members */
	node->str = strdup(str);
	node->len = strlen(str);

	/* connect the node to the rest of the list */
	node->next = *head;
	*head = node;

	return (node);
}
