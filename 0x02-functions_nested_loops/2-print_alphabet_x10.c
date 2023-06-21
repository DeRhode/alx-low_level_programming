#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_X10 - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet_x10(void)
{
int a;
char letter;
for (a = 0; a < 10; a++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
return (0);
}
