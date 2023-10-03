#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: takes the size of the array
 * @c: specific char to fill up the array
 *
 * Return: pointer to array or NULL if size = 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	int *ptr;
	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		ptr = malloc(sizeof(size) * size);

		for (i = 0; i < size; i++)
			*(ptr + i) = c;
		return (ptr);
	}
	return ('\0');
}
