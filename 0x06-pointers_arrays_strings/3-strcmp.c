#include "holberton.h"
/**
 * _strcmp - main function
 * @s1: str
 * @s2: str
 * Return: b
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		b = s1[a] - s2[a];
		if (s1[a] - s2[a] != 0)
			break;
		a++;
	}
	return (b);
}
