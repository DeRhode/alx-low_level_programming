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
int m = n;
_putchar('0' +(m));
_putchar(',');
_putchar(' ');
}
