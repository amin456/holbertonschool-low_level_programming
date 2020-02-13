#include "holberton.h"
/**
 * more_numbers - main function
 * @void: parameter
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; i++)
	{
		for (b = 0; b <= 14; j++)
		{
			if (b > 9)
				_putchar ((b / 10) + '0');
			_putchar ((b % 10) + '0');
		}
		_putchar ('\n');
	}
}
