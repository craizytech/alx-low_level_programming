#include "main.h"

/**
 * times_table - prints the timestable 0f 9
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j < 10)
			{
				_putchar((i *j) + '0');
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				k = i * j;
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
