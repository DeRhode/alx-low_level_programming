#include <stdio.h>
#include "main.h"
/**
 * times_table - Write a function that prints
 * the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int result = i * j;
if (result < 10)
{
putchar(' ');
putchar('0' + result);
}
else
{
putchar('0' + (result / 10));
putchar('0' + (result % 10));
}
if (j < 9)
{
putchar(',');
putchar(' ');
}
}
if (i != 9)
{
putchar('\n');
}
}
}

