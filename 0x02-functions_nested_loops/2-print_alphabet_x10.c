#include "holberton.h"
/**
 *main - main function
 *Description: prints 10 times the alphabet, in lowercase, followed by a new line
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int i, h;

	h = 0;

	while (h < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i++);
		}
		_putchar(10);
		h++;
	}
}
