#include <unistd.h>
/**
 * _putchar - Prints a character to the standard output
 * @c: The character to be printed
 *
 * Return: Always 1 (Success)
 */
int _putchar(char c)
{
/*This is where the _putchar function is executed */
return (write(1, &c, 1));
}
