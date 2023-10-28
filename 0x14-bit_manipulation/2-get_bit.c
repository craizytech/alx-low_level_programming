#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to be represented in binary form
 * @index: index representing the location of the number
 *
 * Return:  the value at the bit index or -1 on error
 */

void get_bit(unsigned long int n, unsigned int index)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}

void *bin(unsigned long int n)
{
	char *b;
	int len = 0, i = 0;

	if (n > 1)
	{
		bin(n >> 1);
		len++;
	}
	
	b[len
