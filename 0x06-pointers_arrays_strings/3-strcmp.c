#include <stdio.h>
#include "main.h"
/**
 * _strcmp - Write a function that compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
int z = 0;
while (s1[z] != '\0' && s2[z] != '\0')
{
if (s1[z] != s2[z])
{
return (s1[z] - s2[z]);
}
z++;
}
return (0);
}
