#include <stdio.h>
/**
 * main - main function
 *@void: empty
 *Return: 0
 */
int main(void)
{
	int o;

	for (o = 1; o < 100; o++)
	{
		if (o % 3 == 0 && o % 5 == 0)
			printf("FizzBuzz ");
		else if (o % 3 == 0)
			printf("Fizz ");
		else if (o % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", o);
	}
	printf("Buzz\n");
	return (0);
}
