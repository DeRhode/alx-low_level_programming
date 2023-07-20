#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: first input
 * @...: numerous inputs
 *
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pars;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(pars, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pars, int);
	va_end(pars);
		return (sum);
}
