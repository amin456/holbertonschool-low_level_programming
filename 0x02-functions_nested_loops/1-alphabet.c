#include "holberton.h"
 /**
  *description: print_alphabet - main function
  *void print_alphabet(void)
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