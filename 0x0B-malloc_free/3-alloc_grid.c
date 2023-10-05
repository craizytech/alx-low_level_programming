#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: NULL on failure, if height || width <= 0 else pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = malloc(sizeof(ptr) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
	free (ptr);
}
