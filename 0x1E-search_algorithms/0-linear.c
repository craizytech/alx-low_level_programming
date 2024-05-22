#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - this function searches for a value in an array of integers
 * @array: This is the array containing the values
 * @size: this is the number of elements in the array
 * @value: this is the value to search for
 *
 * Return: The first index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
