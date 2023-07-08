#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: first
 * @argv: second
 *
 * Return: Always 0;
 */
int main(int argc, char *argv[])
{
int coins = 0;
int cents = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (cents < 0)
{
printf("0\n");
return (0);
}
coins += cents;
cents %= 25;
coins += cents;
cents %= 10;
coins += cents;
cents %= 5;
coins += cents;
cents %= 2;
coins += cents;
printf("%d\n", coins);
return (0);
}	
