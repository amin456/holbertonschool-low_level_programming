#include "holberton.h"
/**
 *main - main function
 *Description: a program that prints Holberton, followed by a new line
 *Return: 0
 */
void print_alphabet(void);
{
	char i  ='a';
	for ( i = 'a' ; i <= 'z' ; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
	return (0);
}
