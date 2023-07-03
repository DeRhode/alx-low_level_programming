#include <stdio.h>
#include "main.h"
/**
 * _strspn - Write a function that gets the
 * length of a prefix substring.
 * @s: Entry point
 * @accept: Second Entry
 *
 * Return: ALways 0;
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
char *ptr_s = s;
while (*ptr_s != '\0')
{
char *ptr_accept = accept;
while (*ptr_accept != '\0')
{
if (*ptr_s == *ptr_accept)
{
a++;
break;
}
ptr_accept++;
}
if (*ptr_accept == '\0')
{
return (a);
}
ptr_s++;
}
return (a);
}
