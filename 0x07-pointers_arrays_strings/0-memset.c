#include "holberton.h"
/**
 * *_memset - main function
 * @s: size
 * @b: buff
 * @n: para
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
