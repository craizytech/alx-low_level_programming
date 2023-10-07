#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previouslly allocated with a call to free
 * @old_size: is the size in bytes of the allocated space for ptr
 * @new_size: is the size in bytes for the new memory block
 *
 * Return: pointer to the new ptr to the newly allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return NULL;
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);

		if (old_size < new_size)
			new_size = old_size;

		for (i = 0; i < old_size && i < new_size; i++)
			new_ptr[i] = ptr[i];
		free(ptr);
	}
	return (new_ptr);
}
