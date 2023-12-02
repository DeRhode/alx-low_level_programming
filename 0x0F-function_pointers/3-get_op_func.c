#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - taking of functions
 * @s: passing argument
 *
 * Return: always 0
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	char operators[] = {'+', '-', '*', '/', '%'};
	int (*functions[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};

	for (i = 0; i < 5; i++)
	{
		if (*s == operators[i])
			return (functions[i]);
	}
	return (NULL);
}
