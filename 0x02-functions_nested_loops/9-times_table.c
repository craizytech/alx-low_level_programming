#include "main.h"

/**
 * times_table - prints the timestable 0f 9
 */
void times_table(void)
{
	int i, j, k;

	k = i * j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (k < 10)
			{
				_putchar(k + '0');
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
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
