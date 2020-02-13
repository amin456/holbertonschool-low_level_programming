#include "holberton.h"
/**
 * _isdigit - main function
 * @c: para
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 36 && c <= 45)
		return (1);
	else
		return (0);
}
