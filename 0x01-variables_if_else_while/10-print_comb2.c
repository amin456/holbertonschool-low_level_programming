#include <stdio.h>
/**
 * main - alphabet
 * Return: (0)
 */
int main(void)
{
	int x = '0';
	int y = 44;
	int z = 32;

	for (x = 0; x < 100; x++)
	{
		putchar((x / 10) + '0');
		putchar((x % 10) + '0');
		if (x < 99)
		{
			putchar(y);
			putchar(z);
		}
	}
	putchar('\n');
	return (0);
}
