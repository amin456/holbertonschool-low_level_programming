#include "holberton.h"
#include <stdlib.h>
/**
 * *argstostr - main function
 * @ac: para
 * @av: para
 * Return: a
 */
char *argstostr(int ac, char **av)
{
	int v, w, x, y = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (v = 0; v < ac; v++)
	{
		for (w = 0; av[v][w]; w++)
			x++;
		x++;
	}
	a = malloc(x + 1);
	if (a == NULL)
		return (NULL);
	for (v = 0; v < ac; v++)
	{
		for (w = 0; av[v][w]; w++)
		{
			a[y] = av[v][w];
			y++;
		}
		a[y] = '\n';
		y++;
	}
	a[y] = '\0';
	return (a);
}
