#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid previosly allocated by the alloc_grid
 * @grid: double pointer to the 2d array created by alloc grid
 * @height: number of columns in the array.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
