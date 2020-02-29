#include "holberton.h"
/**
 * _recursion - first function
 * @x: para
 * @n: para
 * Return: rec
 */
int _recursion(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x <= n)
		return (_recursion(x + 1, n));
	else
		return (-1);
}
/**
 * _sqrt_recursion - main function
 * @n: para
 * Return: rec
 */
int _sqrt_recursion(int n)
{
	return (_recursion(0, n));
}
