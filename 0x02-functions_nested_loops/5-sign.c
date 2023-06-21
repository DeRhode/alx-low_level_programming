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
_putchar('+');
return (n > 0);
}
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar(-1);
}
return (0);
}
