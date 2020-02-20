#include "holberton.h"
/**
 * *cap_string - main function
 * @s: str
 * Return: s
 */
char *cap_string(char *s)
{
	int a, b;
	char m[] = {' ', '\t', ',', ';', '?', '.', '!', '"', '(', ')', '{', '}'};
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			for (b = 0; m[b] != '\0'; b++)
				if ((s[a - 1]) == m[b])
				{
					s[a] -= 32;
				}
	}
	return (s);
}
