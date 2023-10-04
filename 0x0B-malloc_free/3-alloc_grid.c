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
	unsigned int size;
	int *ptr;

	if (height <= 0 || width <= 0)
		return (NULL);
	size = height * width;
	ptr = malloc(sizeof(ptr) * size);
	if (ptr == NULL)
			return (NULL);
	return (ptr);
}
