#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list of types
 *
 * Return: ALways 0
 */
void print_all(const char * const format, ...)
{
	va_list pars;
	char *str;
	unsigned int i = 0;
	char ch;
	int num;
	float fnum;
	int printed = 0;
	va_start(pars, format);

	while (format && format[i])
	{
		if (printed)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				ch = va_arg(pars, int);
				printf("%c", ch);
				break;
			case 'i':
				num = va_arg(pars, int);
				printf("%d", num);
				break;
			case 'f':
				fnum = va_arg(pars, double);
				printf("%f", fnum);
				break;
			case 's':
				str = va_arg(pars, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				printed--;
				break;
		}
		printed++;
		i++;
	}
	va_end(pars);
	printf("\n");
}
