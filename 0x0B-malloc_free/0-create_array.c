#include <stdlib.h>
#include "main.h"

/**
 * create_array - function
 * @size: 1
 * @c: 2
 * Return: return
 */

char *create_array(unsigned int size, char c)
{
	char *d = malloc(size);

	if (size == 0 || d == 0)
	{
		return (0);
	}
	while (size--)
	{
		d[size] = c;
	}
	return (d);
}
