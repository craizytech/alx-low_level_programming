#include "lists.h"

/**
 * add_node_end - fuction adds a new node at the end of a list
 * @head: double pointer to the head element of the list
 * @str: string to be appended to the new node
 *
 * Return: the address of the new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while ((ptr->next) != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}

	return(new_node);
}
