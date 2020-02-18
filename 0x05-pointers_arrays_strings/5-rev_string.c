#include "holberton.h"
/**
 * rev_string - main function
 * @s: para
 * Return: void
 */
void rev_string(char *s)
{
	int x = 0, y;
	char m[100];

	while (s[x] != '\0')
	{
		m[x] = s[x];
		x++;
	}
	x--;
	for (y = x; y >= 0; y--)
	{
		s[x - y] = m[y];
	}
}
