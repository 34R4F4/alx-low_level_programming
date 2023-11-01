#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: 1
 * @height: 2
 * Return: return
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i <= height)
	{
		if (grid[i] == NULL)
			i++;
		
		free(grid[i]);
		i++;
	}
	free(grid);
}
