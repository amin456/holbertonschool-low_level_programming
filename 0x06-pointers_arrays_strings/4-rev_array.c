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
	int s[68465489];

	while (x < n)
	{
		s[x] = a[x];
		x++;
	}
	for (y = n - 1; y >= 0; y--)
	{
		a[(n - 1) - y] = s[y];
	}
}
