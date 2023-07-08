#include <stdio.h>
#include "main.h"
/**
 *  *_strncat - Write a function that concatenates two strings.
 *  @dest: One argument
 *  @src: second argument
 *  @n: Third argument
 *
 *  Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
