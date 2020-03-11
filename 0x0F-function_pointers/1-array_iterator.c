#include "function_pointers.h"
/**
 * array_iterator - main function
 * @array: id
 * @size: id
 * @action: id
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array == 0 || action == 0)
		return;
	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
