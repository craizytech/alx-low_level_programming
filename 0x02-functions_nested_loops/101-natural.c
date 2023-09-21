#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of all natural numbers u 1024, muls of 3, 5
 * Return: 0
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	return (sum);
}
