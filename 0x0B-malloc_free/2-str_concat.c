#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - main function
 * @s1: para
 * @s2: para
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int a = 0, b = 0, c, d, e = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	s = malloc(a + b + 1);
	if (s == NULL)
		return (NULL);
	for (c = 0; c <= a; c++)
		s[c] = s1[c];
	for (d = a; d <= a + b; d++)
	{
		s[d] = s2[e];
		e++;
	}
	s[d] = '\0';
	return (s);
}
