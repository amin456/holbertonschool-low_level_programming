#include "holberton.h"
/**
 * _isupper - main function
 * @c: para
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}