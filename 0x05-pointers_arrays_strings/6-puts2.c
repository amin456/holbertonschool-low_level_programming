#include "holberton.h"
/**
 * puts2 - main function
 * @str: para
 * Retun: void
 */
void puts2(char *str)
{
	int x, y;

	while (str[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y += 2)
	{
		_putchar (str[y]);
	}
	_putchar ('\n');
}
