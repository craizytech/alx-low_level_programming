#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of elemets to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;
	int j;

	while(a[i])
		i++;
	for (j = 0; (j < i) && (j <= n); j++)
	{
		printf("%d", a[j]);
		if ( j == n)
			continue;
		printf(", ");
	}
	printf("\n");
}
