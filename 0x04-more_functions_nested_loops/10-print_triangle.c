#include "holberton.h"
/**
 * print_triangle - main function
 * @size: para
 * Return: void
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	for (x = 1; x <= size; x++)
	{
		for (y = size - x; y >= 1; y--)
			_putchar(' ');
		for (z = 0; z < x; z++)
			_putchar('#');
		_putchar('\n');
	}
}
