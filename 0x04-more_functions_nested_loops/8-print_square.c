#include "main.h"

/**
 * print_square - prints square
 * @size: size of the square to be printed
 */
void print_square(int size)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
}
