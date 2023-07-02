#include <stdio.h>
#include "main.h"
/**
 * swap_int - Write a function that swaps the
 * values of two integers.
 * @a: First Entry
 * @b: second Entry
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
