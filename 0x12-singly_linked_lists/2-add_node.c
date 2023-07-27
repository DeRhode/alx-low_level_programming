#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node -  a function that adds a new
 * node at the beginning of a list_t list.
 * @head: first Entry
 * @str:  needs to be duplicated
 *
 * Return: Always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
