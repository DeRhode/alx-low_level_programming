#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of a aprticular size
 * and match it to the character c
 * @size: array size
 * @c: character to be assigned
 *
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int a;
str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}
	return (str);
}
