#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Print every minute of the day of jack
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int hours, minutes;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
putchar('0' + (hours / 10));
putchar('0' + (hours % 10));
putchar(':');
putchar('0' + (minutes / 10));
putchar('0' + (minutes % 10));
putchar('\n');
}
}
}
