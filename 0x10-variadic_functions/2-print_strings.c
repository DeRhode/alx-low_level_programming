#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: input
 * @n: number of strings
 *
 * Return: ALways 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list pars;
	va_start(pars, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pars, char*);
		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n -1)
		{
			printf("%s", separator);
		}
	}
	va_end(pars);
	printf("\n");
}
