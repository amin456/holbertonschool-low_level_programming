#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - main function
 * @grid: grid
 * @height: height
 * Return: free
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
