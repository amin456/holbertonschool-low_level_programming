julien@ubuntu:~/0x02$ cat 1-main.c
#include "holberton.h"

		/**
		 * main - check the code for Holberton School students.
		 *
		 * Return: Always 0.
		 */
int main(void)
{
	print_alphabet();
	return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
