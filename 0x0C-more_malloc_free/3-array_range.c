#include "main.h"

/**
 * array_range - function
 * @min: 1
 * @max: 2
 * Return: return
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (!arr)
		return (NULL);

	for(;min <= max; min++)
	{
		arr[i] = min;
	}

	return (arr);
}
