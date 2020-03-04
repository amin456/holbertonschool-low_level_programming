#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - main function
 * @str: para
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		s = malloc(x + 1);
	if (s == NULL)
		return (NULL);
	for (y = 0; y <= x; y++)
		s[y] = str[y];
	s[y] = '\0';
	return (s);
}
