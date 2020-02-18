#include "holberton.h"
/**
 * _strlen - main function
 * @s: para
 * Return: x
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] > '\0')
		x++;
	return (x);
}
