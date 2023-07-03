#include <stdio.h>
#include "main.h"
/**
 *   *_strcat(char *dest, char *src) - Write a function that concatenates
 * two strings.
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 * @*dest: argument
 * @*src: another argument
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
