#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - main function
 *@a: para
 *@size : para
 *Return: 0
 */
void print_diagsums(int *a, int size)
{
	int w, x, y = 0, z = 0;

	for (w = 0 ; w < size ; w++)
	{
		for (x = 0 ; x < size ; x++)
		{
			if (w == x)
				y += *a;
			if ((w + x) == (size - 1))
				z += *a;
			a += 1;
		}
	}
	printf("%d, %d\n", y, z);
}
