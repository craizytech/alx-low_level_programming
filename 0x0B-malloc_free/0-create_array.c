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
	char *ptr;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		ptr = malloc(sizeof(char) * size);
		
		if (ptr == '\0')
			return ('\0');
		for (i = 0; i < size; i++)
			*(ptr + i) = c;
		return (ptr);
	}
	free(ptr);
	return ('\0');
}
