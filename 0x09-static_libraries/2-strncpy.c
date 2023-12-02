#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - Write a function that copies a string.
 * @dest: First argument
 * @src: Second argument
 * @n: Thir argument
 *
 * Return: Always 0;
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
