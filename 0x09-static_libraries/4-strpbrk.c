#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk - Write a function that searches
 * a string for any of a set of bytes.
 * @s: First Entry
 * @accept: Second Entry
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *ptr_accept = accept;
while (*ptr_accept != '\0')
{
if (*s == *ptr_accept)
{
return (s);
}
ptr_accept++;
}
s++;
}
return (NULL);
}
