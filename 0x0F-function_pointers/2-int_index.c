#include "function_pointers.h"

/**
 * int_index - function that searches for an integer in an array
 * @array: array of integers that may contain the needed number
 * @size: number of elements in the arrray
 * @cmp: function that compares the values
 *
 * Return: index of the 1st el else returns 0 else return -1 if size<=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
