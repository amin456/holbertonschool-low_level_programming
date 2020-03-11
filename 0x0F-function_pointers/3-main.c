#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - struct opp
 * @argc: number of arguments
 * @argv: arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strlen(argv[1]) != 1) || (argv[2][0] != '+' && argv[2][0] != '-'))
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	z = get_op_func(argv[2])(x, y);
	printf("%d\n", z);
	return (0);
}
