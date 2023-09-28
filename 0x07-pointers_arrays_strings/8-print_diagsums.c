#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2 diagonals in a matrix
 * @a: the matrix(2d or 3d )
 * @size: size 
 */
void print_diagsums(int *a, int size)
{
	int i;
	int prim = 0;
	int sec = 0;

	for (i = 0; i < size; i++)
	{
		prim += a[i * size + i];
		sec += a[i * size + (size - i - 1)];
	}
	printf("%d, %d", prim, sec);
}
