#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - main function
 * @str: para
 * Return: m
 */
char *_strdup(char *str)
{
	char *m;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		m = malloc(x + 1);
	if (m == NULL)
		return (NULL);
	for (y = 0; y <= x; y++)
		m[y] = str[y];
	m[y] = '\0';
	return (m);
}
