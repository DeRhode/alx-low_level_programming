#include <stdio.h>
#include "main.h"
/**
 * print_sign - Entry point
 * @n: Representing input value
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
return (n > 0);
_putchar('+');
}
if (n == 0)
{
return (n > 0);
_putchar('0');
}
else
{
return (-1);
_putchar('-');
}
return (0);
}
