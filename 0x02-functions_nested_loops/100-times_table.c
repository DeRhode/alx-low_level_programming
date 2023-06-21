#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Write a function that
 * prints the n times table, starting with 0.
 * Prototype void print_times_table(int n);
 * If n is greater than 15 or less than 0
 * the function should not print anything
 * @n: the number entered into the function
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int num, mult, prod;
if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 99)
{
_putchar(' ');
_putchar(' ');
}
if (prod >= 100)
{
_putchar('0' + (prod / 100));
_putchar('0' + ((prod / 10) % 10));
}
else if (prod <= 99 && prod >= 10)
{
_putchar('0' + (prod / 10));
}
_putchar('0' + (prod % 10));
_putchar(' ');
}
_putchar('\n');
}
}
}
