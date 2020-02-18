#include "holberton.h"
/**
 * _puts - main function
 * @str: para
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}
