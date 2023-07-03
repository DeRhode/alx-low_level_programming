#include <stdio.h>
#include "main.h"
/**
 * *_memcpy - Write a function that copies memory area.
 * @dest: First Entry
 * @src: Second Entry
 * @n: Unsigned Entry
 *
 * Return: Always 0;
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptrdest = dest;
char *ptrsrc = src;
while (n > 0)
{
*ptrdest++ = *ptrsrc++;
n--;
}
return (dest);
}
