#include <stdio.h>
#include "main.h"
/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line.
 * @s: Entry String
 *
 * Return: Always 0;
 */
void print_rev(char *s)
{
int length = 0;
int i;
if (s == NULL)
{
return;
}
while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
