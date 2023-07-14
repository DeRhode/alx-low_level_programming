#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocating memory block
 * @ptr: pointer
 * @old_size: ...
 * @new_size: .......
 *
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *n_ptr;
if (ptr == NULL)
return malloc(new_size);
if (new_size == 0)
free(ptr);
return (NULL);
if (new_size == old_size)
return ptr;
n_ptr = malloc(new_size);
if (n_ptr == NULL)
return (NULL);
memcpy(n_ptr, ptr, (old_size < new_size) ? old_size : new_size);
free(ptr);
return (n_ptr);
}
