#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char s[] = "_putchar\n";
int i = 0;
while (s[i])
{
_putchar(s[i]);
i++;
}
return (0);
}

