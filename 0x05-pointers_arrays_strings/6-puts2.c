#include <stdio.h>
#include "main.h"
/**
 * puts2 - Write a function that prints every other
 * character of a string, starting with the
 * first character, followed by a new line.
 * @str: ENtry string
 *
 * Return: Always 0;
 */
void puts2(char *str)
{
int i = 0;
if (str == NULL)
{
return;
}
while (str[i] != '\0')
{
putchar(str[i]);
i += 1;
if (str[i] == '\0')
{
break;
}
i++;
}
putchar('\n');
}
