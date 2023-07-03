#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: Entry point
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
int c;
int b;
for (c = 0; c < 8; c++)
{
for (b = 0; b < 8; b++)
{
printf("%c ", a[c][b]);
}
printf("\n");
}
}
