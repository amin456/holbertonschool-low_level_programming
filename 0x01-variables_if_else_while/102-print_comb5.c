#include <stdio.h>
#include <stdlib.h>
/**
 *main - print all possible combinations of two two-digits number
 *Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
