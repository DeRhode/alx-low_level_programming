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
return (sqrtHelper(n, 1, n));
}
/**
 *sqrtHelper - Write a function that returns
 *the natural square root of a number.
 * @n: number
 * @start: starting
 * @end: ending
 *
 *Return: Always 0
 */
int sqrtHelper(int n, int start, int end)
{
int m = (start + end) / 2;
if (start > end)
{
return (-1);
}
if (m * m == n)
{
return (m);
}
if (m <= n / m)
{
return (sqrtHelper(n, m + 1, end));
}
else
{
return (sqrtHelper(n, start, m - 1));
}
}
