#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function
 * @width: 1
 * @height: 2
 * Return: return
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **arr;

	arr = malloc(sizeof(*arr) * height);

	if (width <= 0 || height <= 0 || arr == 0)
	{
		return (NULL);
	}
	else
	{
	for (h = 0; h <= height; h++)
	{
		arr[h] = malloc(sizeof(**arr) * width);
		if (arr[h] == 0)
		{
			while (h--)
				free(arr[h]);
			free(arr);
			return (NULL);
		}

		for (w = 0; w <= width; w++)
		{
			arr[h][w] = 0;
		}
	}
	}
	return (arr);
}
