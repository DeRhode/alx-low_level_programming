#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - Write a function that returns
 * the natural square root of a number.
 * @n: number
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (sqrt(n));
}
