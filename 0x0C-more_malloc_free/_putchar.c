#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character
 * @c: character
 *
 * Return: 1 on success, 0 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
