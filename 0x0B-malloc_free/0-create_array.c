#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - main function
 * @size: para
 * @c: para
 * Return: m
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *m;

	m = malloc(sizeof(char) * size);
	if (size <= 0 || m == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		m[a] = c;
	return (m);
}
