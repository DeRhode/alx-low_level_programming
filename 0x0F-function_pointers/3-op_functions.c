#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - Returns sum
 * @a: first integer
 * @b: second place
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Differencs
 * @a:first
 * @b: second
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return(a - b);
}
/**
 * op_mul - Return multiplication
 * @a: first
 * @b: second
 *
 * Return: always 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - entry point
 * @a: first
 * @b: second
 *
 * Return: Always the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod Returns remainder
 * @a: first
 * @b: second
 *
 * Return: Remainder of the devision
 */
int op_mod(int a, int b)
{	
	if (b == 0)
	{
	printf("Error\n");
	exit(1000);
	}
	return (a % b);
}
