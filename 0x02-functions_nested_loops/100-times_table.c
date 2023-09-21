#include "main.h"

/**
 * prints_times_table - prints timestable of n
 * @n: the number to be checked
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			k = i * j;
			_putchar(',');
			_putchar(' ');
			if (k < 100)
				_putchar(' ');
			if (k < 10)
				_putchar(' ');
			if (k > 99)
			{
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
			}
			if (k > 9)
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
