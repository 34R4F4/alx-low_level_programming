#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: 1
 * Return: return
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m > 0)
	{
		retur n(m);
	}
	else
	{
		exit(98);
	}
}
