#include "holberton.h"
/**
 *print_line - main function
 *@n: parameter
 *Return: void
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar ('\n');
	}
}
