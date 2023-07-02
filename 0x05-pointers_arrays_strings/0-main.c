#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 10;
printf("Before: %d\n", number);
reset_to_98(&number);
printf("After: %d\n", number);
return (0);
}
