#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - Write a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: number
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_recursive(n, 2));
}
/**
 * is_prime_recursive - New function
 * @n: value
 * @divisor: currrent divisor
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
if (divisor == n)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_prime_recursive(n, divisor + 1));
}
