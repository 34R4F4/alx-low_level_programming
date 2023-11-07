#include "dog.h"
#include <stdio.h>

/**
 * print_dog - f
 * @d: sp
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		int x = 0;
		char *i = {"name", "age", "owner"};

		for (x = 0; x < 3; x++)
		{
			if (d->i[x] == NULL)
			{
				printf("nil");
			}
			else if (x == 2)
			{
				printf("%g\n", d->age);
			}
			else
			{
				printf("%s\n", d->i[x]);
			}
		}
	}
}
