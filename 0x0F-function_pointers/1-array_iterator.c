#include "function_pointers.h"

/**
 * array_iterator - calls the action function for each el of the array
 * @array: array of integers
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
