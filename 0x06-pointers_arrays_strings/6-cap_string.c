#include "holberton.h"
/**
 *cap_string- uppercase for first letter
 *@m: pointer
 *Return: return m
 */
char *cap_string(char *m)
{
	int a;

	for (a = 0; m[a] != '\0'; a++)
	{
		if ((m[a] == '\n') || (m[a] == ' ') || (m[a] == '}')
		    || (m[a] == '{') || (m[a] == ')') || (m[a] == '(') || (m[a] == '"')
		    || (m[a] == '?') || (m[a] == '!') || (m[a] == '.') || (m[a] == ';')
		    || (m[a] == ',') || (m[a] == '\t'))
		{
			if ((m[a + 1] >= 'a') && (m[a + 1] <= 'z'))
				m[a + 1] = m[a + 1] - 32;
		}
	}
	return (m);
}
