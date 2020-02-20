#include "holberton.h"
/**
 * reverse_array - main function
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x = 0, y;
	int m[13];

	while (x < n)
	{
		m[x] = a[x];
		x++;
	}
	for (y = n - 1; y >= 0; y--)
	{
		a[(n - 1) - y] = m[y];
	}
}
