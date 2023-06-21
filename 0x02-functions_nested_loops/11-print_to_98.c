#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Write a function that prints all
 * natural numbers from n to 98,
 * followed by a new line.
 *
 * Prototype: void print_to_98(int n);
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number
 * passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 * @n: Represent the starting number to 98
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
if (i < 0)
{
_putchar('-');
_putchar('0' - (i % 10));
if (i / 10 != -1)
{
_putchar('0' - (i / 10) % 10);
}
}
else
{
if (i >= 10)
{
_putchar('0' + (i / 10) % 10);
_putchar('0' + i % 10);
}
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
