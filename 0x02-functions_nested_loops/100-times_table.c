#include "main.h"

/**
 * print_times_table - prints the times table of a number n
 * @n: the num
 *
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (k < 10)
					_putchar(k + '0');
				else if (k > 9 && k < 100)
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
				_putchar('\n');
			}
		}
	}
}
