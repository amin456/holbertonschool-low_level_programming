#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argv: parameter
 * @argc: parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b = 0, c;

	for (a = 1; a < argc; a++)
	{
		for (c = 0; argv[a][c] != '\0'; c++)
		{
			if (!(argv[a][c] >= '0' && argv[a][c] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
		b += atoi(argv[a]);
	printf("%d\n", b);
	return (0);
}
