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

	if (m > 0)
	{
		return (m);
	}
	else
	{
		exit(98);
	}
}
