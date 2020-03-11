#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - argc argv
 * @ac: number of arguments
 * @av: arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (strlen(argv[1]) != 2)
	{
		printf("Error\n");
		exit(2);
	}
	if (argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (int *)&main;
	printf("%x\n", a[atoi(argv[1])]);
	return (0);
}
