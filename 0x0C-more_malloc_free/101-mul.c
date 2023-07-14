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
int mul_numbers(char *num1, char *num2)
{
	unsigned long int result = 0;
	unsigned long int n1 = 0;
	unsigned long int n2 = 0;

	n1 = atoi(num1);
	n2 = atoi(num2);
	result = n1 * n2;
	return (result);
}
