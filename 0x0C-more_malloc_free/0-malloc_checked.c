#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: 1
 * Return: return
 */

void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);

	if (m == 0)
	{
		exit(98);
	}
	else
	{
		return (m);
	}
}
