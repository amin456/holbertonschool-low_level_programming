#include "holberton.h"
/**
 * *_strstr - main function
 * @haystack: para
 * @needle: para
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;
		while (*n == *haystack && *n != '\0' && *haystack != '\0')
		{
			haystack++;
			n++;
		}
		if (*n == '\0')
			return (h);
		haystack = h + 1;
	}
	return (0);
}
