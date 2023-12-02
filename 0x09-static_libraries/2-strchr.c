#include <stdio.h>
#include "main.h"
/**
 * *_strchr - Write a function that locates a character in a string
 * @s: First entry
 * @c: Second Entry
 *
 * Return: Always 0;
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
