#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicating t a new memory location
 * @str: character
 *
 * Return: always 0
 */
char *_strdup(char *str)
{
char *a;
int c;
int x = 0;
if (str == NULL)
{
	return (NULL);
}
c = 0;
while (str[c] != '\0')
{
	c++;
}
a = malloc(sizeof(char) * (c + 1));
if (a == NULL)
{
	return (NULL);
}
for (x = 0; str[x]; x++)
{
	a[x] = str[x];
}
return (a);
}
