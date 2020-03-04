#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - allocate a 2d array of ints
 *@width: width
 *@height: height
 *Return: a
 */
int **alloc_grid(int width, int height)
{
	int **a = NULL;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		a[y] = malloc(width * sizeof(int));
		if (a[y] == NULL)
		{
			for (x = 0; x < y; x++)
				free(a[x]);
			free(a);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			a[y][x] = 0;
	}
	return (a);
}
