#include "holberton.h"
/**
 * print_alphabet - main function
 *Description:  prints the alphabet, in lowercase, followed by a new line
 *Return: 0
 */
void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
