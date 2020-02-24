#include "holberton.h"
/**
 * *_memcpy - main function
 * @dest: destination
 * @src: source
 * @n: para
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0, b;

	while (dest[a] != '\0')
		a++;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	for ( ; b < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
