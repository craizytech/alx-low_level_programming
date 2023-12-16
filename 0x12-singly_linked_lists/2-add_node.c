#include "lists.h"

/**
 * add_node - adds a new node to the beggining of the list
 * @head: double pointer to the node at the beggging of the list
 * @str: string to be included in the new node
 *
 * Return: the address of the new node or NULL if the allocation fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
