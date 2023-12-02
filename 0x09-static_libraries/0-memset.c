#include <stdio.h>
#include "main.h"
/**
 * *_memset - Write a function that fills memory with a constant byte.
 * @s: First entry
 * @b: Second entry
 * @n: Unsigned entry
 *
 * Return: Always 0;
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n > 0)
{
*ptr++ = b;
n--;
}
return (s);
}
