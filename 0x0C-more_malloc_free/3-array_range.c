#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: always 0
 */
int *array_range(int min, int max)
{
int *a;
int s, i;
	if (min > max)
		return (NULL);

	s = max - min + 1;
	a = malloc(s * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		a[i] = min++;
	return (a);

}
