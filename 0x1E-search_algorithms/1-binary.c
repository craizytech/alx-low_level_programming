#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: contains all the values
 * @size: this is the number of elements in the array
 * @value: this number being searched for
 *
 * Return: index where the value is locates or -1 if array is null or num isnt
 * in the array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	left = 0;
	right = size -1;
	mid = (left + right) / 2;

	while (left <= right)
	{
		mid = (left + right) / 2;
		
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		printf("\n");

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
