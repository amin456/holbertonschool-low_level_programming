#include "holberton.h"
/**
 *_strspn- gets length of substring
 *@s: buff
 *@accept: pointer
 *Return: return statement
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (s[a] != accept[b])
			break;
	}
	return (a);
}
