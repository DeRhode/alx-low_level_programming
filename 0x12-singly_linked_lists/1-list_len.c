#include <stdio.h>
#include <stddef.h>
/**
 * list_len -  a function that returns the
 * number of elements in a linked list_t list.
 * @h: Element
 *
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		nodeCount++;
		curr = curr->next;
	}
	return (nodeCount);
}
