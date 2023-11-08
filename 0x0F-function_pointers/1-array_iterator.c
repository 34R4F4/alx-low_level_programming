#include "function_pointers.h"
/**
 * array_iterator - f
 * @array: 1
 * @size: 2
 * @action: 3
 * Return: v
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned long int i = 0;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
