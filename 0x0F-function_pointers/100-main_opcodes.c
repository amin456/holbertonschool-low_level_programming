#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main(:)? (- argc argv)?
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: r
 */
int main(int ac, char *av[])
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
	printf("%x\n", a[atoi(av[1])]);
	return (0);
}
