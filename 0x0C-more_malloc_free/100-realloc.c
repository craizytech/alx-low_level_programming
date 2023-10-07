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
	unsigned int i;
	int *p;


