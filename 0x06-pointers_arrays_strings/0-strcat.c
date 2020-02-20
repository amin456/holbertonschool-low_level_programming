#include "holberton.h"
/**
 * char *_strcat - main function
 * @dest: destination
 * @src: source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a] != '\0')
		a++;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a+b] = src[b];
	}
	return (dest);
}
