#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: takes the number whose last digit is needed
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
if (n == INT_MIN)
{
n = 8;
_putchar('-');
}
else
{
n = n % 10;
if (n < 0)
{
n = -n;
}
}
n = n  % 10;
_putchar('0' + n);
return (n);
}
