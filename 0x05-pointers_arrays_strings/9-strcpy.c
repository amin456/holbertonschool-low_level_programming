#include "holberton.h"
/**
 * *_strcpy - main function
 * @dest: para
 * @src: para
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y;

	while (src[x] != '\0')
	{
		x++;
	}
	for (y = 0; y <= x; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
