#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2D array of int
 * @width: number of columns
 * @height: number of rows
 *
 * Return: NULL on failure or if weight || height is <= 0
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);

	int **grid = malloc(size0f(int *) * height);
	if (grid  == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] ==NULL)
		{
			for (int j = 0; j < i; j++)
				free (grid[j]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
