#include "holberton.h"
/**
 *_sign - main function
 *return
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
	else (n = 0)
	     {
		     _putchar('0');
		     return (0);
	     }
	_putchar(',');
	_putchat(' ');
	_putchar('\n');

}
