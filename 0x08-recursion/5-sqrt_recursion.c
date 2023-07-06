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
int m;
int start = 1;
int end = n;
int result = -1;
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
while (start <= end)
{
m = (start + end) / 2;
if (m *m == n)
{
return (m);
}
if (m <= n / m)
{
start = m + 1;
result = m;
}
else
{
end = m - 1;
}
}
return (result);
}
