#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum numbers
 * @max: maximum number
 *
 * Return: pointer to the array of integers
 */

int *array_range(int min, int max)
{
	int i = 0, len = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		len++;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		if (min < max)
			min++;
	}
	return (ptr);
}
