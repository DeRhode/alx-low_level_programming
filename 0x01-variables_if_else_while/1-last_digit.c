#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int last = n % 10;
printf("Last digit of %d is %d and ", n, last);
if (last > 5)
{
printf("is greater than 5\n");
}
if (last == 0)
{
printf("is 0\n");
}
if (last < 6 && last > 0)
{
printf("is less than 6 and not 0\n");
}
return (0);
}
