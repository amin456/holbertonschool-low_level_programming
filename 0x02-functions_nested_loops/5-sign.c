#include "holberton.h"
/**
 *print_sign - main function
 *Description: prints the sign of a number.
 *@n: int
 *Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar(',');
	_putchar(' ');
	_putchar('\n');

}
