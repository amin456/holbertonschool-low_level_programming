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
	int **a;
	int x;

	a = malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(width * sizeof(int));
	}
	return (a);
}
