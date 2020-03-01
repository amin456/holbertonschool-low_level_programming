#include <stdio.h>
#include <stdlib.h>
/**
 *main - print all possible combinations of two-digits number
 *Return: 0
 */
int main(void)
{
	int  a, b, c;
	for (a = 48; a <= 57; a++)
	{
		c = a;
		c++;
		for (b = c; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (!(a == 56 && b == 57))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar ('\n');
	return (0);
}
