#include "lists.h"
/**
 * add_node - adds a node to the beginning of the list
 * @head: double pointer to the beginning of a list_t list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
