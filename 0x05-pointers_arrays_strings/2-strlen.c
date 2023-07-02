#include <stdio.h>
#include "main.h"
/**
 * _strlen - Write a function that
 * returns the length of a string.
 * @s: Entry String
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
int length;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
