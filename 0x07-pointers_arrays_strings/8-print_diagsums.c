#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Write a function that will print the
 * sum of the two diagonals of a square matrix of integers.
 * @a: Entry first
 * @size: Second Entry
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
int sum1;
int sum2;
int i;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
printf("Sum of Diagonal: %d\n", sum1);
printf("Sum of anti-diagonal: %d\n", sum2);
}
