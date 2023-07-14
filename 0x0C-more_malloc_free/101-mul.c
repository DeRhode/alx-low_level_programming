#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * mul_numbers - function to multiply numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: Always
 */
void mul_numbers(char *num1, char *num2)
{
	unsigned long int result = 0;
	unsigned long int n1 = 0;
	unsigned long int n2 = 0;

	n1 = strtoull(num1, NULL, 10);
	n2 = strtoull(num2, NULL, 10);
	result = n1 * n2;
	printf("%lu\n", result);
}
/**
 * val_input - validating input
 * @str: input
 *
 * Return: Always 0
 */
int val_input(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
