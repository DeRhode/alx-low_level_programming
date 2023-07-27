#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_list -  a function that prints all
 * the elements of a list_t list.
 * @h: A pointer to the values of list_t
 *
 * Return: If str is NULL print [0] (nill)
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->string == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", current->length, current->string);
		count++;
		current = current->next;
	}
	return (count);
}
