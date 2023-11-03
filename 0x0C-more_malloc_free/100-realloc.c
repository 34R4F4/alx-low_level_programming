#include "main.h"


/**
 * _realloc - function
 * @ptr: 1
 * @old_size: 1
 * @new_size: 1
 * Return: return
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);
		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	m = malloc(new_size);

	for (i = 0; i <= new_size; i++)
	{
		m[i] = ptr[i];
	}

	return (m);
}
