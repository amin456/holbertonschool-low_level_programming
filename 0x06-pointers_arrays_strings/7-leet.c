#include "holberton.h"
/**
 * *leet - main function
 * @v: str
 * Return: v
 */
char *leet(char *v)
{
	int a = 0, b;
	char v1[] = {'A', 'E', 'O', 'T', 'L'};
	char v2[] = {'4', '3', '0', '7', '1'};

	while (v[a] != '\0')
	{
		for (b = 0; v1[b] != '\0'; b++)
		{
			if (v[a] == v1[b] || v[a] == v1[b] + 32)
			{
				v[a] = v2[b];
			}
		}
		a++;
	}
	return (v);
}
