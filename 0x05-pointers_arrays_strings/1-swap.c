#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: ist integer
 * @b: 2nd integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
