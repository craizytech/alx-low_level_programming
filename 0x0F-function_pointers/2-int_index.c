#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of numbers
 * @size: number of elements in the array
 * @cmp: function that compares values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
