#include "holberton.h"
/**
 * print_rev - main function
 * @s: para
 * Return: void
 */
void print_rev(char *s)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar (s[y]);
	}
	_putchar ('\n');
}
