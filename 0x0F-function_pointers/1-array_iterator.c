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
		long unsigned int i = 0;

		for (i = 0; i < sizeof(array); i++)
		{
			action(array[i]);
		}
	}
}
