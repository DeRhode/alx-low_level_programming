#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory.
 * @b: takes in the value
 *
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(sizeof(b));

	if (a == NULL)
		exit(98);
	return (a);
}
