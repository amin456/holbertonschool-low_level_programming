#include "holberton.h"
/**
 * char *_strcat - main function
 * @dest: destination
 * @src: source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
