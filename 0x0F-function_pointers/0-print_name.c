#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - main function
 * @name: identifier
 * @f: identifier
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
