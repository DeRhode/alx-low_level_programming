#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: Count of arguments
 * @argv: vector pointers
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
			return (98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	*operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if (*argv[2] == '/' || (*argv[2] == '%' && y == 0))
	{
		printf("Error\n");
		return (100);
	}
	z = operation(x, y);
	printf("%d\n", z);
	return (0);

}
