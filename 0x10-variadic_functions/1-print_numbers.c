#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed
 * @n: NUmber of integers to be printed
 *
 * Return: If separator is NULL, don’t print it
 * Print a new line at the end of your function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pars;
	unsigned int i;
	int num;

	va_start(pars, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(pars, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(pars);
	printf("\n");
}
